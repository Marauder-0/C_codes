#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,choice,new=0;
    int*ptr;
    printf("Enter Size of Array: ");
    scanf("%d",&a);
    ptr = (int*)calloc(a,sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory Allocation Failed.\n");
        return 0;
    }
    printf("Enter %d Elements: ",a);
    for(int i=0;i<a;++i)
    {
        scanf("%d",ptr+i);
    }
    printf("Do you wish to Increase Array Size\n");
    printf("1: Yes\n0: No\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Enter how much more element you wish to insert: ");
        scanf("%d",&new);
        ptr = (int*)realloc(ptr,(a+new)*sizeof(int));
        if(ptr==NULL)
        {
            printf("Memory Allocation Failure.\n");
            return 0;
        }
        else
        {
            printf("New Array Size Successfully Planted.");
        }
        printf("Enter New Allocated Size Data: ");
        for(int i=a;i<(a+new);++i)
        {
            scanf("%d",ptr+i);
        }
        printf("Final Array: ");
        for(int i=0;i<(a+new);++i)
        {
            printf("%d ",*(ptr+i));
        }
    }
    else if(choice==0)
    {
        printf("Proceeding With Current Array.\n");
        printf("Final Array: ");
        for(int i=0;i<(a+new);++i)
        {
            printf("%d ",*(ptr+i));
        }
    }
    free(ptr);
    return 0;
}