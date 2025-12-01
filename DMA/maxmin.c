#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int*ptr;
    printf("Enter size of array: ");
    scanf("%d",&n);

    if(n >=0){
        printf("Enter a value greater than 0\n");
        return 0;
    }

    ptr = (int*)calloc(n,sizeof(int));
    printf("Enter %d elements: ",n);
    for(int i=0;i<n;++i){
        scanf("%d",ptr+i);
    }
    int max = *ptr;
    for(int i=1;i<n;++i){
        if(max < *(ptr+i)){
            max = *(ptr+i);
        }
    }
    int min = *ptr;
    for(int i=1;i<n;++i){
        if(min > *(ptr+i)){
            min = *(ptr+i);
        }
    }
    printf("Max is %d\nMin is %d\n",max,min);

    free(ptr);
    return 0;
}