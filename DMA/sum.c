#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,sum=0;
    int*ptr;
    printf("Enter size of array: ");
    scanf("%d",&n);
    //allocate run-time memory
    ptr = (int*)calloc(n,sizeof(int));
    //Check Memory allocation
    if(ptr ==  NULL){
        printf("Memory allocation Failed.\n");
        return 0;
    }
    
    printf("Enter %d elements: ",n);
    for(int i=0;i<n;++i){
        scanf("%d",ptr+i);
    }

    //SUM AND AVERAGE LOGIC
    for(int i=0;i<n;++i){
        sum = sum + *(ptr+i);
    }
    float average = (float)sum/n;
    printf("Sum is %d and Average is %f\n",sum,average);

    free(ptr);//return heap memory allocation.
    return 0;
}