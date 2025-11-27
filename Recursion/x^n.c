//x^n recursion
#include<stdio.h>
int paw(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    return a*paw(a,b-1);
}
int main()
{
    int x,y;
    printf("Enter Base: ");
    scanf("%d",&x);
    printf("Enter Power: ");
    scanf("%d",&y);
    int res = paw(x,y);
    printf("Answer: %d\n",res);
    return 0;
}