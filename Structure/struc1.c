//Write a C program to declare a structure for a student (containing roll number, name, percent), 
// read details for multiple students, and display them those student with >=75%
#include<stdio.h>
#include<string.h>
struct result
{
    int rollno;
    char name[50];
    int percent;
};
void main()
{
    struct result r[50];
    int i,n;
    printf("Enter Total Students: ");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        printf("Enter Student Roll Number: ");
        scanf("%d",&r[i].rollno);
        printf("Enter Student Name: ");
        scanf("%s",r[i].name);
        printf("Enter Student's Percentage: ");
        scanf("%d",&r[i].percent);
    }
    printf("Passed Students are: ");
    for(i=1;i<=n;++i)
    {
        if(r[i].percent>=75)
        {
            printf("%s ,",r[i].name);
        }
    }
}
