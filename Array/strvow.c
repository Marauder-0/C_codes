//C program to count the no. of vowels, consonants, space, digit, and words are in a given line of text
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char str[100];
    static int i,j,v,c,d,s,w;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Given string is %s\n",str);
    
    //Convert Upper to Lower character
    for(j=0;str[j]!='\0';++j)
    {
        str[j] = tolower(str[j]);
    }
    printf("\nGiven String is: %s\n",str);

    //logic to count vowel, consonant,digit,etc
    while(str[i]!= '\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='e'||str[i]=='u')
        ++v;
        else if(str[i]>'a'&& str[i]<='z')
        ++c;
        else if(str[i]>='0' && str[i]<='9')
        ++d;
        else if(str[i] ==' ')
        ++s;
        ++i;
    }
    w = s+1;
    printf("\nVowel = %d\n",v);
    printf("\nConsonant = %d\n",c);
    printf("\nSpace = %d\n",s);
    printf("\nDigit = %d\n",d);
    printf("\nWords = %d\n",w);
}