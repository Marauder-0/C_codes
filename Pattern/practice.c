#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("ENTER ROW SIZE: ");
    scanf("%d",&n);
    printf("ENTER COLUMN SIZE: ");
    scanf("%d",&m);
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=m;++j)
        {
            if((i==1||j==1)||(i==n||j==m))
            {
                printf("*");
            }            
            else
            {
                printf(" ");
            }
            printf("\n");
        }
    } 
    return 0;
}