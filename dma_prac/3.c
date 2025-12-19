#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    int*ptr = (int*)calloc(n,sizeof(int));
    if(ptr == NULL){
        printf("Memory Failure\n");
        exit(0);
    }
    printf("Enter Array Values:\n");
    for(int i=0;i<n;++i){
        scanf("%d",(ptr+i));
    }
    int max = *(ptr+0);
    int min = *(ptr+0);
    for(int i=1;i<n;++i)
    {
        if((*(ptr+i)) > max){
            max  =  *(ptr+i);
        }
        if((*(ptr+i)) < min){
            min = *(ptr+i);
        }
    }
    printf("Max = %d\nMin =  %d\n",max,min);
    free(ptr);
    return 0;
}