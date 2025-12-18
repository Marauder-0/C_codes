//Reverse a number using while loop 
#include<stdio.h>
int main()
{
    int num,rem,rev;
    printf("Enter Test Value: ");
    scanf("%d",&num);
    //Reverse Logic
    rev = 0;
    while(num!=0)
    {
        rem = num%10;          //Digit Extraction
        rev = (rev*10) + rem;  //Start Making Reversed Number
        num = num/10;          //Remove Remainder
    }
    printf("Reversed Number is %d\n",rev);
    return 0;
}