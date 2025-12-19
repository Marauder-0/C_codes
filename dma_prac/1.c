#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,*ptr,sum=0;
    float avg;
    printf("Enter size of array: ");
    scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));
    if(ptr==NULL){
        printf("Memory Allocation Failure\n");
        exit(0);
    }
    printf("Enter Array Values: \n");
    for(int i=0;i<n;++i)
    {
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<n;++i)
    {
        sum = sum + *(ptr+i);
    }
    avg = sum/n;
    printf("Sum of Entered Values: %d\n",sum);
    printf("Average of Entered Values: %.2f",avg);
    free(ptr);
    return 0;
}