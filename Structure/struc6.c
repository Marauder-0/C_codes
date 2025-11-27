//C program to Implement Structure for Employees. Atttributes(Name,id,salary,dateofjoin), display those with dateofjoin < 2000
#include<stdio.h>
#include<string.h>
struct date
{
    int dd,mm,yy;
};
struct emp
{
    char ename[100];
    int id;
    float sal;
    struct date doj;
};
void main()
{
    struct emp e[100];
    int i,n;
    printf("Number of Employees: ");
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;++i)
    {
        printf("Employee %d Name: ",i+1);
        fgets(e[i].ename,sizeof(e[i].ename),stdin);
        e[i].ename[strcspn(e[i].ename,"\n")] = '\0';

        printf("Employee %d ID: ",i+1);
        scanf("%d",&e[i].id);
        getchar();

        printf("Employee %d Salary: ",i+1);
        scanf("%f",&e[i].sal);
        getchar();

        printf("Employee %d's Date of Joining: ",i+1);
        scanf("%d%d%d",&e[i].doj.dd,&e[i].doj.mm,&e[i].doj.yy);
        getchar();
    }
    printf("Employees Who Joined Before 2000 and have greater than 30,000 Salary:-\n");
    for(i=0;i<n;++i)
    {
        if(e[i].sal > 30000 && e[i].doj.yy < 2000)
        {
            printf("%s\t",e[i].ename);
        }
    }
}