//C program to implement tranpose of a matrix for m x m
#include<stdio.h>
int main()
{
    int a[20][20],b[20][20], i,j,n,m;
    printf("Enter Row Size\n");
    scanf("%d",&n);
    printf("Enter Column Size\n");
    scanf("%d",&m);
    printf("Enter %d x %d Elements in array\n",n,m);
    for(i=0;i<n;++i)
    {
        for(j=0;j<m;++j)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Original Matrix A is: \n");
    for(i=0;i<n;++i)
    {
        for(j=0;j<m;++j)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    //Transpose Logic
    printf("Tranpose Matrix is \n");
    for(i=0;i<n;++i)
    {
        for(j=0;j<m;++j)
        {
            b[j][i] = a[i][j];
        }
    }
    for(i=0;i<n;++i)
    {
        for(j=0;j<m;++j)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}