#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 2048
#define MAX_TOKENS 100

int main() {
    // Open the input and output files
    FILE *infile = fopen("dictionary.txt", "r");
    FILE *outfile = fopen("output.txt", "w");

    // Check if files opened successfully
    if (infile == NULL) {
        printf("Error: Could not open dictionary.txt. Make sure it is in the same folder.\n");
        return 1;
    }
    if (outfile == NULL) {
        printf("Error: Could not create output.txt.\n");
        fclose(infile);
        return 1;
    }

    char line[MAX_LINE_LENGTH];

    // Read the file line by line
    while (fgets(line, sizeof(line), infile)) {
        // Remove trailing newline character
        line[strcspn(line, "\n")] = 0;

        // Skip empty lines, comments (#), or headers ([)
        if (strlen(line) == 0 || line[0] == '#' || line[0] == '[') {
            continue;
        }

        // Tokenize the line (split by space or tabs)
        char *tokens[MAX_TOKENS];
        int token_count = 0;
        char *token = strtok(line, " \t");

        while (token != NULL && token_count < MAX_TOKENS) {
            tokens[token_count++] = token;
            token = strtok(NULL, " \t");
        }

        // We need at least 3 parts: trigger, word(s), language
        // Example: "hun" "aalabyss" "en-AU"
        if (token_count >= 3) {
            char *trigger = tokens[0];
            
            // Print the trigger line
            fprintf(outfile, "- trigger: \"%s\"\n", trigger);
            
            // --- CHANGED LINE BELOW ---
            // Replaced "@Pokétwo" with "@Pokémon"
            fprintf(outfile, "  replace: \"@Pokémon c ");

            // Loop through the middle tokens to reconstruct the word
            for (int i = 1; i < token_count - 1; i++) {
                fprintf(outfile, "%s", tokens[i]);
                // Add a space between words if it's not the last part of the word
                if (i < token_count - 2) {
                    fprintf(outfile, " ");
                }
            }
            
            // Close the quote and new line
            fprintf(outfile, "\"\n");
            
            // Print the "word: true" line (2 spaces indent)
            fprintf(outfile, "  word: true\n");
        }
    }

    // Close files
    fclose(infile);
    fclose(outfile);

    printf("Conversion complete! Check 'output.txt'.\n");
    return 0;
}