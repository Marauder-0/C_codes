//Malloc vs Calloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,*ptr,*ptr1;
    printf("Enter malloc value: ");
    scanf("%d",&a);
    printf("Enter Calloc Value: ");
    scanf("%d",&b);
    //Malloc Allocation
    ptr = (int*)malloc(a*sizeof(int));
    //Calloc Allocation
    ptr1 =  (int*)calloc(b,sizeof(int));
    //Malloc Print
    printf("Malloc Initialise as Garbage: \n");
    for(int i=0;i<a;++i)
    {
        printf("%d\n",*(ptr+i));
    }
    //Calloc Print
    printf("Calloc Initialise as Zero: \n");
    for(int i=0;i<b;++i)
    {
        printf("%d\n",*(ptr1+i));
    }
    free(ptr);
    free(ptr1);
    return 0;
}