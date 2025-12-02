#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char ch[50],ch1[50],*cptr;
    int l1,l2;
    printf("Enter String one: ");
    fgets(ch,sizeof(ch),stdin);
    ch[strcspn(ch,"\n")] = '\0';
    printf("Enter String two: ");
    fgets(ch1,sizeof(ch1),stdin);
    ch1[strcspn(ch1,"\n")] = '\0';
    l1 = strlen(ch);
    l2 = strlen(ch1);

    cptr = (char*)malloc((l1+1)*sizeof(char));
    if(cptr ==  NULL)
    {
        printf("Memory Allocation Failed\n");
        exit(0);
    }
    strcpy(cptr,ch);
    int newsize = l1 + l2 + 2;
    cptr = (char*)realloc(cptr,newsize*(sizeof(char)));
    if(cptr ==  NULL)
    {
        printf("Memory Allocation Failed\n");
        exit(0);
    }
    strcat(cptr," ");
    strcat(cptr,ch1);
    printf("After Conc.: %s\n",cptr);
    free(cptr);
    return 0;
}