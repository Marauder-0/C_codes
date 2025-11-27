//C program to check input string is palindrome or not without using string built-in functions
#include<stdio.h>
#include<string.h>
int main()
{
//     char str1[100],str2[100],temp;
//     int i,j;
//     printf("Enter String: ");
//     gets(str1);
//     //Copy String 1 to String 2
//     i=0;
//     while(str1[i] != '\0')
//     {
//         str2[i] = str1[i];
//         ++i;
//     }
//     str2[i] = '\0';

//     //Reverse String 1
//     j=0;
//     while(str1[j] != '\0')
//     {
//         ++j;
//     }
    // for(i=0;i<(j-i-1);++i)
    // {
    //     temp = str1[i];
    //     str1[i] = str1[j-i-1];
    //     str1[j-i-1] = temp;
    // }

    // //Compare both Strings
    // i=0;
    // while(str1[i] == str2[i])
    // {
    //     if(str1[i] == '\0')
    //     {
    //         break;
    //     }
    //     ++i;
    // }
    // //Check For Palindrome
    // if(str1[i]==str2[i])
    // {
    //     printf("Palindrome\n");
    // }
    // else
    // {
    //     printf("Not Palindrome\n");
    // }
    // return 0;
// }
    char str1[100],str2[100],temp;
    int i,j;
    printf("Enter String: ");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1, "\n")] = '\0';
    strcpy(str2,str1);
    j = strlen(str1)-1;
    for(i=0;i<j;++i)
    {
        temp = str1[i];
        str1[i] = str1[j];
        str1[j] = temp;
        --j;
    }
    //Compare both Strings
    i=0;
    while(str1[i] == str2[i])
    {
        if(str1[i] == '\0')
        {
            break;
        }
        ++i;
    }
    //Check For Palindrome
    if(str1[i]==str2[i])
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}