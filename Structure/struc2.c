//C program to implement structure for employees with members(name,id,salary) (opt. print those with sal >= 67000)
#include <stdio.h>
#include <string.h>
struct emp
{
    char ename[100];
    int eid;
    float esal;
};
void main()
{
    struct emp e[50];
    int i, n;
    printf("Enter Number of Employee: ");
    scanf("%d", &n);
    getchar(); //Fixes Newline Erros for first record
    for (i = 0; i < n; ++i)
    {
        printf("Enter Employee %d Name: ", i + 1);
        fgets(e[i].ename, sizeof(e[i].ename), stdin);
        e[i].ename[strcspn(e[i].ename, "\n")] = '\0';
        printf("Enter Employee %d Id: ", i + 1);
        scanf("%d", &e[i].eid);
        getchar();//Fixes Newline Errors for After 1st Records
        printf("Enter Employee %d Salary: ", i + 1);
        scanf("%f", &e[i].esal);
        getchar();//Fixes Newline Errors for After 1st Records
    }
    printf("\nEmployees with salary >= 67000:\n");
    for (i = 0; i < n; ++i)
    {
        if (e[i].esal >= 67000)
        {
            printf("Id: %d\tName: %s\tSalary: %.2f\t", e[i].eid, e[i].ename, e[i].esal);
        }
    }
}