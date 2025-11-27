#include <stdio.h>
int fsum(int x)
{
   int a,b,c,d,e,res;
    a = x%10;
    x = x/10;
    b = x%10;
    x = x/10;
    c = x%10;
    x = x/10;
    d = x%10;
    x = x/10;
    e = x%10;
    res = a+b+c+d+e;
    return res;
}
int main()
{
    int a;
    scanf("%d",&a);
    int result = fsum(a);
    printf("%d",result);
    return 0;
}