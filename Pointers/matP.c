#include<stdio.h>
int main()
{
    int m[3][3],n[3][3],o[3][3] = {0};
    int*a,*b,*c;
    a=&m[0][0];
    b=&n[0][0];
    c=&o[0][0];
    printf("Enter Elements for Matrix M:\n");
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
            scanf("%d",(a+(i*3)+j));
        }
    }
    printf("Entered Matrix M is: \n");
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
            printf("%d ",*(a+(i*3)+j));
        }
        printf("\n");
    }
    printf("Enter Elements for Matrix N:\n");
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
            scanf("%d",(b+(i*3)+j));
        }
    }
    printf("Entered Matrix N is: \n");
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
            printf("%d ",*(b+(i*3)+j));
        }
        printf("\n");
    }
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
            *(c+(i*3)+j) = *(a+(i*3)+j) + *(b+(i*3)+j);
        }
    }
    printf("Addition Matrix O is: \n");
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
            printf("%d ",*(c+(i*3)+j));
        }
        printf("\n");
    }
    return 0;
}