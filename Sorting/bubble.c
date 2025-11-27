//C program to implement Bubble Sort
#include<stdio.h>
int main()
{
    int a[15],i,j,n,c;
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter %d elements for Array A\n",n);
    for(i=0;i<n;++i)
    {
      scanf("%d",&a[i]);
    }
    printf("Entered Elements are: ");
    for(i=0;i<n;++i)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0;i<(n-1);++i)
    {
        for(j=0;j<(n-i-1);++j)
        {
            if(a[j]>a[j+1])
            {
                c = a[j];
                a[j] = a[j+1];
                a[j+1] = c;
            }
        }
    }

    printf("Sorted array is: ");
    for(i=0;i<n;++i)
    {
        printf("%d ",a[i]);
    }
    return 0;
}