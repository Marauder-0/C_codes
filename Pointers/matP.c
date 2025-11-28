#include<stdio.h>
int scann(int* x)
{
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
            scanf("%d",(x+(i*3)+j));
        }
    }
}
int printing(int* y)
{
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
            printf("%d\t",*(y+(i*3)+j));
        }
        printf("\n");
    }
}
int main()
{
    int m[3][3],n[3][3],o[3][3] = {0};
    int*a,*b,*c;
    a=&m[0][0];
    b=&n[0][0];
    c=&o[0][0];
    printf("Enter Elements for Matrix M:\n");
    scann(a);
    printf("Entered Matrix M is: \n");
    printing(a);
    printf("Enter Elements for Matrix N:\n");
    scann(b);
    printf("Entered Matrix N is: \n");
    printing(b);
    //Addition
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
            *(c+(i*3)+j) = *(a+(i*3)+j) + *(b+(i*3)+j);
        }
    }
    printf("Addition Matrix O is: \n");
    printing(c);
    return 0;
}