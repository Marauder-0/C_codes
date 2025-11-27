//C program to compare dates
#include<stdio.h>
#include<string.h>
struct date
{
    int dd;
    int mm;
    int yyyy;
};
void main()
{
    struct date d[50];
    int i,n,j,dd,mm,yy;
    printf("Enter Amount Of dates: ");
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        printf("Enter Date %d's DD: ",i+1);
        scanf("%d",&d[i].dd);
        printf("Enter Date %d's MM: ",i+1);
        scanf("%d",&d[i].mm);
        printf("Enter Date %d's YYYY: ",i+1);
        scanf("%d",&d[i].yyyy);
    }
    dd = d[0].dd;
    mm = d[0].mm;
    yy = d[0].yyyy;
    for(i=1;i<n;++i)
    {
        if(d[0].yyyy == d[i].yyyy)
        {
            if(d[0].mm == d[i].mm)
            {
                if(d[0].dd == d[i].dd)
                {
                    printf("Date %d = Date %d\n",i,i-1);
                }
                else
                {
                   continue;
                }
            }
        }
        else
        {
            dd = d[i].dd;
            mm = d[i].mm;
            yy = d[i].yyyy;
            continue;
        }
    }
}
//We can also use this to optimise the code

    /*for(i=0;i<(n-1);++i) 
    {
        for(j=(i+1);j<n;++j) 
        {
            if(d[i].dd == d[j].dd && d[i].mm == d[j].mm && d[i].yyyy == d[j].yyyy) 
            {
                printf("Date %d = Date %d\n",i+1,j+1);
            }
        }
    } */