#include<stdio.h>
int main()
{
    int p,*q;
    q = &p;
    char ch,*c;
    c=&ch;
    printf("Enter a Integer\n");
    scanf("%d",&p);
    printf("Enter an alphabet\n");
    scanf(" %c",&ch);
    printf("Address of Variable p is %u\n",q);
    printf("Address of Variable ch is %u\n",c);
    ++q;
    ++c;
    printf("Address of Variable p after is %u\n",q);
    printf("Address of Variable ch after is %u\n",c);
    return 0;
}