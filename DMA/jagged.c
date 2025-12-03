#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,i,j;
    int**ptr,*c;
    printf("Enter Rows: ");
    scanf("%d",&r);
    // printf("Enter Column: ");
    // scanf("%d",&col);
    ptr = (int**)calloc(r,sizeof(int*));
    c = (int*)calloc(r,sizeof(int));
    if(ptr==NULL)
    {
        printf("MEmory Failure\n");
        exit(0);
    }
    for(i=0;i<r;++i)
    {
        scanf("%d",c+i);
    }
    for(i=0;i<r;++i)
    {
        *(ptr+i) = (int*)calloc(*(c+i),sizeof(int));
    }
    //Input
    printf("Enter Elements: \n");
    for(i=0;i<r;++i)
    {
        for(j=0;j<*(c+i);++j)
        {
            scanf("%d",(*(ptr+i)+j));
        }
    }
    //Print
    printf("Jagged Array: \n");
    for(i=0;i<r;++i)
    {
        for(j=0;j<*(c+i);++j)
        {
            printf("%d\t",*(*(ptr+i)+j));
        }
        printf("\n");
    }
    free(c);
    for(i=0;i<r;++i)
    {
        free(*(ptr+i));
    }
    free(ptr);
    return 0;
}