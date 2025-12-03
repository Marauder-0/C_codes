#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n,m,*ptr,*ptr1;
    printf("Enter Array One size: ");
    scanf("%d",&n);
    printf("\nEnter Array Two size: ");
    scanf("%d",&m);
    ptr = (int*)calloc(n,sizeof(int));
    ptr1 = (int*)calloc(m,sizeof(int));
    if(ptr == NULL || ptr1 == NULL)
    {
        printf("Memory Allocation Failure.\n");
        exit(0);
    }
    printf("Enter Values for Array One: ");
    for(int i=0;i<n;++i)
    {
        scanf("%d",(ptr+i));
    }
    printf("\nEnter Values for Array Two: ");
    for(int i=0;i<m;++i)
    {
        scanf("%d",(ptr1+i));
    }
    int new = n+m;
    int*nptr;
    nptr = (int*)calloc(new,sizeof(int));
    if(nptr==NULL)
    {
        printf("Allocation Failure.\n");
        exit(0);
    }
    for(int i=0;i<n;++i)
    {
        *(nptr+i) = *(ptr+i);
    }
    for(int i=0;i<m;++i)
    {
        *(nptr+n+i) = *(ptr1+i);
    }
    printf("\nMerged Array: ");
    for(int i=0;i<new;++i)
    {
        printf("%d  ",*(nptr+i));
    }
    free(ptr);
    free(ptr1);
    free(nptr);
    return 0;
}