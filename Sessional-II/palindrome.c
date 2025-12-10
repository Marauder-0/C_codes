#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int length(int a)
{
    int count=0;
    if(a == 0){
        count = 1;
    }
    else{
        int temp = a;
        while(temp != 0){
            temp = temp/10;
            count++;
        }
    }
    return count;
}
int main(){
    int n,*p,sum=0;
    printf("Enter Value: ");
    scanf("%d",&n);
    //Digit Extraction
    int c = length(n);
    p = (int*)calloc(c,sizeof(int));
    if(p == NULL){
        printf("Memory Allocation Failure.\n");
        exit(0);
    }
    int temp = n;
    for(int i=0;i<c;++i){
        *(p+i) = temp%10;
        temp = temp/10;
    }
    for(int i=0;i<c;++i){
        sum = sum + (int)(pow(10,(c-i-1))*(*(p+i))+0.4);
    }
    if(n == sum){
        printf("Palindrome.\n");
    }
    else{
        printf("Not Palindrome.\n");
    }
    free(p);
    return 0;
}