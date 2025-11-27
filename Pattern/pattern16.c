/*C program for following pattern
13579
3579
579
79
9    */
#include <stdio.h>
int main() 
{
    int i, j, st, count, value;
    for (i = 0; i < 5; i++) 
    {
        st = 1 + 2*i;
        count = ((9 - st) / 2) + 1;
        for (j = 0; j < count; j++) 
        {
            value = st + 2*j;
            printf("%d", value);
        }
        printf("\n");
    }
    return 0;
}
