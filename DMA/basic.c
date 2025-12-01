#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int*ptr;
    printf("Enter size of array\n");
    scanf("%d",&n);
    ptr = (int*) malloc(n*4);

    if(ptr == NULL){
        printf("Memory not allocated.\n");
        return 0;
    }

    printf("Enter %d elements.\n",n);
    for(int i=0;i<n;++i){
        scanf("%d",ptr+i);
    }

    printf("Entered Elements are: ");
    for(int i=0;i<n;++i){
        printf("%d\t",*(ptr+i));
    }
    free(ptr);
    return 0;
}