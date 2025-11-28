//C program to reverse a string without using strrev()
/* #include<stdio.h>
#include<string.h>
int main()
{
    char str[100],temp;
    int i,j;
    printf("Enter A string: ");
    gets(str);
    j = strlen(str);
    for(i=0;i<(j-i-1);++i)
    {
        temp = str[i];
        str[i] = str[j-i-1];
        str[j-i-1] = temp;
    }
    printf("Reverse is %s\n",str);
    return 0;
} */
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],temp;
    int i,j;
    printf("Enter A string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';
    j = strlen(str);
    i=0;
    while(i<(j-i-1))
    {
        temp = str[i];
        str[i] = str[j-i-1];
        str[j-i-1] = temp;
        ++i;
    }
    printf("Reverse is %s\n",str);
    return 0;
}