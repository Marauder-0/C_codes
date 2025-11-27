//C program to implement linear search
#include<stdio.h>
int main()
{
    int a[10],n,key,i,flag=0,loc;
    printf("Enter size of array A from (1-10)\n");
    scanf("%d",&n);
    printf("Enter Entries for Array A\n");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements are: ");
    for(i=0;i<n;++i)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Enter a Search Element\n");
    scanf("%d",&key);
    for(i=0;i<n;++i)
    {
        if(key == a[i])
        {
            loc = i;
            break;
        }
    }
    if(i<n)
    {
        printf("Key is found and is at a[%d] index number.\n",loc);
    }
    else
    {
        printf("Key not found\n");
    }
    return 0;
}