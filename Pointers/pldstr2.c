#include<stdio.h>
#include<string.h>
int main()
{
    char n[20];
    char*st,*end;
    int flag = 1;

    printf("Enter String: ");
    fgets(n,sizeof(n),stdin);
    n[strcspn(n,"\n")] = '\0';

    st = n;
    end = n + strlen(n) - 1;

    //Palindrome Logic
    while(st < end)
    {
        if(*st != *end)
        {
            flag = 0;
            break;
        }
        st++;
        end--;
    }
    if(flag == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}