#include<stdio.h>
int swap(int*x, int*y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return 1;
}
int main()
{
    int n[20],a,*q = n;
    printf("Enter Size of array: ");
    scanf("%d",&a);
    printf("Enter %d elements.\n",a);
    for(int i=0;i<a;++i)
    {
        scanf("%d",(q+i));
    }
    printf("Before Sorting\n");
    for(int i=0;i<a;++i)
    {
        printf("%d\t",*(q+i));
    }
    printf("\n");
    //Bubble Sort
    for(int j=0;j<(a-1);++j)
    {
        for(int i=0;i<(a-1-j);++i)
        {
            if( *(q+i) > *(q+i+1) )
            {
                swap((q+i),(q+i+1));
            }
        }
    }
    printf("After Sorting\n");
    for(int i=0;i<a;++i)
    {
        printf("%d\t",*(q+i));
    }
    return 0;
}