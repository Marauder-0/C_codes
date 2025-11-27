#include<stdio.h>
#include<stdbool.h>
bool evOD(int a)
{
    int i;
    if(a%2 == 0) {return true;}
    else {return false;} 
}
void main()
{
    int i;
    printf("Enter An integer: ");
    scanf("%d",&i);

    if(evOD(i))
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}