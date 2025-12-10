#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n,count=0,*ptr,sum=0;
    printf("Enter A number: ");
    scanf("%d",&n);
    //Length
    if(n == 0)
    {
        count = 1;
    }
    else
    {
        int temp = n;
        while(temp !=0)
        {
            temp = temp/10;
            count++;
        }
    }
    //Digit Extraction
    ptr = (int*)calloc(count,sizeof(int));
    int tem = n;
    for(int i=0;i<count;++i)
    {
        *(ptr+i) = tem%10;
        tem = tem/10;
    }
    for(int i=0;i<count;++i)
    {
        sum = sum + (int)(pow((*(ptr+i)),count) + 0.4);
    }
    
    if(n==sum)
    {
        printf("Armstrong.\n");
    }
    else
    {
        printf("Not Armstrong.\n");
    }
    free(ptr);
    return 0;
}