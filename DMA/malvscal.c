#include<stdio.h>
#include<stdlib.h>
int main(){

    // --MALLOC SECTION-- uncomment to test.
//     int n;
//     int*ptr;
//     printf("Enter size of array: ");
//     scanf("%d",&n);
//     ptr = (int*)malloc(n*sizeof(int));
//     if(ptr == NULL){
//         printf("Memory allocation failed\n");
//         return 0;
//     }
//     printf("Array Values are: ");
//     for(int i=0;i<n;++i){
//         printf("%d\t",*(ptr+i));
//     }
//     free(ptr);
//     return 0;
// }
    // --CALLOC SECTION-- comment this section to test above malloc
    int n;
    int*ptr;
    printf("Enter size of array: ");
    scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));
    if(ptr ==  NULL){
        printf("Memory allocation failed.\n");
        return 0;
    }
    printf("Entered array is: ");
    for(int i=0;i<n;++i){
        printf("%d\t",*(ptr+i));
    }
    free(ptr);
    return 0;
}