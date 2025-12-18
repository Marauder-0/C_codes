//C program to Implement sum of given N numbers and maximum number.(no array)
#include<stdio.h>
int main()
{
    int n,temp,sum=0,max;
    printf("Enter n'TH value: ");
    scanf("%d",&n);
    printf("Enter %d Numbers: ",n);
    for(int i=0;i<n;++i)
    {
        scanf("%d",&temp);
        sum = sum + temp; //Sum of Incoming Input
        if(i == 0) //Assign First Max
        {
            max  = temp;
        }
        else if(temp > max) //Check For a higher value from Next Input
        {
            max = temp;
        }
    }
    //Finally Print Sum and Last Max
    printf("Sum = %d\nMax = %d\n",sum,max);
    return 0;
}