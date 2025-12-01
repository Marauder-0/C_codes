#include<stdio.h>
#include<string.h>
int main()
{
    int a[10][10],b[10][10],c[10][10] = {0},i,j,k;
    int r1,c1,r2,c2;
    //INPUT SIZE
    printf("Enter Row for Matrix A: ");
    scanf("%d",&r1);
    printf("Enter Column for Matrix A:");
    scanf("%d",&c1);
    printf("Enter Row for Matrix B:");
    scanf("%d",&r2);
    printf("Enter Column for Matrix B:");
    scanf("%d",&c2);

    if(c1 == r2)
    {
        printf("Enter %dx%d Matrix's Element:\n",r1,c1);
        for(i=0;i<r1;++i)
        {
            for(j=0;j<c1;++j)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Entered Matrix A: \n");
        for(i=0;i<r1;++i)
        {
            for(j=0;j<c1;++j)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("Enter %dx%d Matrix's Element:\n",r2,c2);
        for(i=0;i<r2;++i)
        {
            for(j=0;j<c2;++j)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("Entered Matrix B: \n");
        for(i=0;i<r2;++i)
        {
            for(j=0;j<c2;++j)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
        // Multiply Logic
        for(i=0;i<r1;++i)
        {
            for(j=0;j<c2;++j)
            {
                for(k=0;k<r2;++k)
                {
                    c[i][j] = c[i][j] + a[i][k]*b[k][j];
                }
            }
        }
        printf("Matrix AxB is : \n");
        for(i=0;i<r1;++i)
        {
            for(j=0;j<c2;++j)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}