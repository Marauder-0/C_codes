//C program to implement binary search
#include<stdio.h>
int main()
{
    int a[10],size,i,target,middle,start,end;
    printf("Enter size of Array(max)\n");
    scanf("%d",&size);
    
    printf("Enter %d elements in sorted order!\n",size);
    for(i=0;i<size;++i)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements are: ");
    for(i=0;i<size;++i)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Enter Target Element\n");
    scanf("%d",&target);
    
    //Binary Search Logic
    start = 0;
    end = size - 1;
    int found = 0;
    while(start<=end)
    {
        middle = (start+end)/2;
        if(a[middle] == target)
        {
            ++found;
            break;
        }
        else if(a[middle] < target)
        {
            start = middle + 1;
        }
        else
        {
            end = middle - 1;
        }
    }
    if(found > 0)
    {
        printf("Target is found and is at index %d\n",middle);
    }
    else
    {
        printf("Target not Found[-1]\n");
    }
    return 0;
}