//C program to implement structure of a bank customer with attribute(Name,AccNo.,Balance) print those with bal <1000
#include<stdio.h>
#include<string.h>
struct cust
{
    char cname[100];
    int acc;
    float bal;
};
void main()
{
    struct cust c[100];
    int i,n;
    printf("Enter Number of CUSTOMER: ");
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;++i)
    {
        printf("Enter Customer %d Name: ",i+1);
        fgets(c[i].cname,sizeof(c[i].cname),stdin);
        c[i].cname[strcspn(c[i].cname, "\n")] = '\0';

        printf("Enter Customer %d Account Number: ",i+1);
        scanf("%d",&c[i].acc);
        getchar();

        printf("Enter Customer %d Balance: ",i+1);
        scanf("%f",&c[i].bal);
        getchar();
    }
    printf("Customers with Less than 1000 Balance :- \n");
    for(i=0;i<n;++i)
    {
        if(c[i].bal < 1000)
        {
            printf("Name: %s\n",c[i].cname);
            printf("Account Number: %d\n",c[i].acc);
            printf("Balance: %f\n",c[i].bal);
        }
    }
}