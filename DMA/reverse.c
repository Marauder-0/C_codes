#include<stdio.h>
#include<stdlib.h>
int swap(int*x,int*y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int n,i;
    int*ptr;

    printf("Enter Size of array: ");
    scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory Allocation Failed.\n");
        return 0;
    }
    printf("Enter %d Elements: ",n);
    for(i=0;i<n;++i)
    {
        scanf("%d",ptr+i);
    }
    printf("Before Reverse: ");
    for(i=0;i<n;++i)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\nAfter Reverse: ");
    //Reverse Logic
    for(i=0;i<(n/2);++i)
    {
        swap( (ptr+i),(ptr+n-1-i));
    }
    for(i=0;i<n;++i)
    {
        printf("%d ",*(ptr+i));
    }
    free(ptr);
    return 0;
}