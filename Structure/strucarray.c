//C program to implement Structure Array
#include<stdio.h>
struct Array
{
    int RollNo;
    char name[100];
    int Marks;
};
int main()
{
    struct Array A[2];
    int i;
    for(i=0;i<2;++i)
    {
        printf("Enter Student RollNo. : ");
        scanf("%d",&A[i].RollNo);
        printf("Enter Student Name : ");
        scanf("%s",A[i].name);
        printf("Enter Student Marks : ");
        scanf("%d",&A[i].Marks);
    }
    for(i=0;i<2;++i)
    {
        printf("%d.%s = %d.\n",A[i].RollNo,A[i].name,A[i].Marks);
    }
    return 0;
}
