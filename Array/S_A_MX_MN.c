//C program to input array elements in runtime and find sum, average of all entries, and max ,min
#include<stdio.h>
int main()
{
    int a[10],i,sum=0,max,min,n;
    float avg;
    printf("Enter size of array a\n");
    scanf("%d",&n);
    printf("Enter Entries for Array A\n");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
    {
        sum = sum + a[i];
    }
    printf("Sum of Elements in Array A is %d\n",sum);
    avg = sum/n;
    printf("Average of Elements of Array A is %f\n",avg);
    for(i=1;i<n;++i)
    {
       max = a[0];
       if(max < a[i])
       {
        max = a[i];
       } 
    }
    printf("Max is %d\n",max);
    for(i=1;i<n;++i)
    {
        min = a[0];
        if(min > a[i])
        {
            min = a[i];
        }
    }
    printf("Min is %d\n",min);
    return 0;
}