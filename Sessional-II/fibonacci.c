#include<stdio.h>
int main()
{
    int n;
    printf("Enter nth value: ");
    scanf("%d",&n);
    int a = 0,b = 1;
    printf("Series: \n%d\t%d\t",a,b);
    for(int i=2;i<n;++i)
    {
        int c = a+b;
        printf("%d\t",c);
        a = b;
        b = c;
    }
    return 0;
}