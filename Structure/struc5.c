//C program to implement strucure for 50 students , attributes(name,roll,5 sub marks, total,percent) display only with >=75
#include<stdio.h>
#include<string.h>
struct std
{
    char sname[100];
    int roll;
    int m[5];
    int total;
    float per;
};
void main()
{
    struct std s[100];
    int i,j,n,total;
    printf("Number of Students: ");
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;++i)
    {
        printf("Student %d Name: ",i+1);
        fgets(s[i].sname,sizeof(s[i].sname),stdin);
        s[i].sname[strcspn(s[i].sname,"\n")] = '\0';

        printf("Student %d Roll Number: ",i+1);
        scanf("%d",&s[i].roll);
        getchar();

        printf("5 Subject Marks:- \n");
        for(j=0;j<5;++j)
        {
            scanf("%d",&s[i].m[j]); 
        }
        getchar();
        s[i].total = 0;
        for(j=0;j<5;++j)
        {
            s[i].total += s[i].m[j];
        }
        s[i].per = (float)s[i].total/5;
    }
    printf("Students With above 75%% are:- \n");
    for(i=0;i<n;++i)
    {
        if(s[i].per >= 75)
        {
            printf("Name: %s\nRoll No.: %d\nTotal: %d\nPercentage: %f\n\n",s[i].sname,s[i].roll,s[i].total,s[i].per);
        }
    }
}