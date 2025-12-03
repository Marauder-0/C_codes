#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,row,col;
    int**ptr;
    printf("Enter Row  Variable: ");
    scanf("%d",&row);
    printf("Enter Column Variable: ");
    scanf("%d",&col);
    //Spine
    ptr = (int**)calloc(row,sizeof(int*));
    if(ptr==NULL)
    {
        printf("Memory Allocation Failure\n");
        exit(0);
    }
    //Ribs
    for(i=0;i<row;++i)
    {
        *(ptr+i) = (int*)calloc(col,sizeof(int));
    }
    //Input
    for(i=0;i<row;++i)
    {
        for(j=0;j<col;++j)
        {
            scanf("%d",(*(ptr+i)+j));
        }
    }
    //Print
    printf("Printed: \n");
    for(i=0;i<row;++i)
    {
        for(j=0;j<col;++j)
        {
            printf("%d\t",*(*(ptr+i)+j));
        }
        printf("\n");
    }
    for(i=0;i<row;++i)
    {
        free(*(ptr+i));
    }
    return 0;
    free(ptr);
}