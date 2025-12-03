#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k,row1,row2,col1,col2;
    int**a,**b,**c;
    printf("Enter Row&Column of Matrix 1: ");
    scanf("%d%d",&row1,&col1);
    printf("\nEnter Row&Column of Matrix 2: ");
    scanf("%d%d",&row2,&col2);
    if (row1 <= 0 || col1 <= 0 || row2 <= 0 || col2 <= 0) 
    {
        printf("Dimensions must be positive integers.\n");
        return 1; 
    }
    //Row Allocation For Matrix A
    a = (int**)calloc(row1,sizeof(int*));
    //Row Allocation For Matrix B
    b = (int**)calloc(row2,sizeof(int*));
    if(a == NULL || b == NULL)
    {
        printf("Memory Allocation Failure.\n");
        exit(0);
    }
    //Column Allocation for Matrix A
    for(i=0;i<row1;++i)
    {
        *(a+i) = (int*)calloc(col1,sizeof(int));
    }
    //Column Allocation for Matrix B
    for(i=0;i<row2;++i)
    {
        *(b+i) = (int*)calloc(col2,sizeof(int));
    }
    //Input for Matrix A
    printf("Enter Values for Matrix A: \n");
    for(i=0;i<row1;++i)
    {
        for(j=0;j<col1;++j)
        {
            scanf("%d",(*(a+i)+j));
        }
    }
    //Input for Matrix B
    printf("Enter Values for Matrix B: \n");
    for(i=0;i<row2;++i)
    {
        for(j=0;j<col2;++j)
        {
            scanf("%d",(*(b+i)+j));
        }
    }
    //Multiplication Logic
    if(col1 == row2)
    {
        //Row Allocation for Matrix C
        c = (int**)calloc(row1,sizeof(int*));
        //Column Allocation for Matrix C
        for(i=0;i<row1;++i)
        {
            *(c+i) = (int*)calloc(col2,sizeof(int)); //Values will be Zero as Matrix declared using Calloc
        }
        //Actual Multiply
        for(i=0;i<row1;++i)
        {
            for(j=0;j<col2;++j)
            {
                for(k=0;k<col1;++k)
                {
                    *(*(c+i)+j) = *(*(c+i)+j) + (*(*(a+i)+k))*(*(*(b+k)+j));
                }
            }
        }
        //Print Result Matrix
        printf("Result: \n");
        for(i=0;i<row1;++i)
        {
            for(j=0;j<col2;++j)
            {
                printf("%d\t",*(*(c+i)+j));
            }
            printf("\n");
        }
        for(i=0;i<row1;++i)
        {
            free(*(c+i));
        }
        free(c);
    }
    else
    {
        printf("Matrix Multiplication Not Possible\n");
    }
    for(i=0;i<row1;++i)
    {
        free(*(a+i));
    }
    for(i=0;i<row2;++i)
    {
        free(*(b+i));
    }
    free(a);
    free(b);
    return 0;
}