// C program to implement selection sort
#include<stdio.h>
int main()
{
    int a[30],n,i,j,min,temp;
    printf("Enter size of array\n"); //Input size of array
    scanf("%d",&n);
    printf("Enter %d elements.\n",n); //Input Elements in array
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    printf("Array Before Sorting: "); //Unsorted array Print
    for(i=0;i<n;++i)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    //Selection Sort Logic
    for(i=0;i<(n-1);++i)
    {
        min=i;
        for(j=(i+1);j<n;++j)
        {
            if(a[min] > a[j])
            {
                min = j;
            }
        }
        if(i!=min)
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    printf("After Sorting Array: "); // Printed Sorted Array
    for(i=0;i<n;++i)
    {
        printf("%d",a[i]);
    }
    return 0;
}