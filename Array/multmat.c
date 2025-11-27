//c Program to multiply two matrix of order (m x n) and (n x p) 
#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10]={0},i,j,k,n1,n2,m1,m2;
    printf("Enter Row for Array1: ");
    scanf("%d",&n1);
    printf("Enter Column for Array1: ");
    scanf("%d",&m1);
    printf("Enter Row for Array2: ");
    scanf("%d",&n2);
    printf("Enter Column for Array1: ");
    scanf("%d",&m2);
    if(m1 == n2)
    {
        //Input Matrix A
        printf("Enter %d x %d Matrix's Entries\n",n1,m1);
        for(i=0;i<n1;++i)
        {
            for(j=0;j<m1;++j)
            {
                scanf("%d",&a[i][j]);
            }
        }
        //Input Matrix B
        printf("Enter %d x %d Matrix's Entries\n",n2,m2);
        for(i=0;i<n2;++i)
        {
            for(j=0;j<m2;++j)
            {
                scanf("%d",&b[i][j]);
            }
        }
        //Multiply Logic
        for(i=0;i<n1;++i)
        {
            for(j=0;j<m2;++j)
            {
                for(k=0;k<m2;++k)
                {
                    c[i][j] = c[i][j] + a[i][k]*b[k][j];
                }
            }
        }
        printf("Multiplied matrix of size %d x %d is: \n",n1,m2);
        for(i=0;i<n1;++i)
        {
            for(j=0;j<m2;++j)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("INVALID DIMENSION MATRIX\n");
    }
    return 0;
}