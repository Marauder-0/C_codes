//C program to print array
/*#include<stdio.h>
int main()
{
    int marks[5] = {4,4,6,2,6};
    int i,sum=0;
    for(i=0;i<=4;++i)
    {
        sum = sum + marks[i];
    }
    printf("SUM IS %d\n",sum);
    return 0;
}    */


/*#include<stdio.h>
int main()
{
    int marks[7];
    int i,j,sum=0;
    printf("Enter 5 subject marks\n");
    for(i=0;i<=5;++i)
    {
        scanf("%d",&marks[i]);
    }
    for(j=0;j<=5;++j)
    {
        sum = sum + marks[j];
    }
    printf("sum is %d\n",sum);
    return 0;
}  */


#include <stdio.h>
int main()
{
    char ch[30];
    int i,n;
    printf("enter the number characters you want to use.\n");
    scanf("%d",&n);

    printf("Enter %d characters.\n",n);
    for(i=0;i<n;++i)
    {
        scanf("%c", &ch[i]);
    }
    printf("Entered Characters are: ");
    for(i=0;i<n;++i)
    {
        printf("%c", ch[i]);
    }
    return 0;
}     

