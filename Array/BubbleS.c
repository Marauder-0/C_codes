#include<stdio.h>
int main()
{
    int a[30],n,temp,i,j;
    printf("Enter Size of array: ");
    scanf("%d",&n);

    printf("Enter %d Array Element:\n",n);
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered Unsorted Elements are: ");
    for(i=0;i<n;++i)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    //Bubble Sorting Logic
    for(i=0;i<(n-1);++i)
    {
        for(j=0;j<(n-1-i);++j)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    //Print Sorted Array
    printf("Sorted Array: ");
    for(i=0;i<n;++i)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}