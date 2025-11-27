#include<stdio.h>
int max(int arr[],int size)
{
    int i,maxV;
    maxV = arr[0];
    for(i=1;i<size;++i)
    {
        if(maxV < arr[i])
        {
            maxV = arr[i];
        }
    }
    return maxV;
}
int main()
{
    int a[10];
    int i,r;
    printf("Enter 10 Integer to check max: \n");
    for(i=0;i<10;++i)
    {
        scanf("%d",&a[i]);
    }

    r = max(a,10);
    printf("Max integer among these integers are: %d\n",r);
    return 0;
}