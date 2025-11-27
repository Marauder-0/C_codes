#include<stdio.h>
int main()
{
    int a[3][3], i,j,min,max,sum=0,n,m;
    float average;
    printf("Enter Row Size!\n");
    scanf("%d",&n);
    printf("Enter Column Size!\n");
    scanf("%d",&m);
    printf("Enter %d x %d elements.\n",n,m);
    for(i=0;i<n;++i)
    {
        for(j=0;j<m;++j)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;++i)
    {
        for(j=0;j<m;++j)
        {
            sum = sum + a[i][j];
        }
    }
    average = sum/(n*m);
    printf("SUM IS %d\n",sum);
    printf("AVERAGE IS %f\n",average);
    for(i=0;i<n;++i)
    {
        for(j=1;j<m;++j)
        {
            max = a[0][0];
            if(max < a[i][j])
            {
                max = a[i][j];
            }
        }
    }
    printf("Max value is %d\n",max);
    for(i=0;i<n;++i)
    {
        for(j=1;j<m;++j)
        {
            min = a[0][0];
            if(min > a[i][j])
            {
                min = a[i][j];
            }
        }
    }
    printf("Min Value is %d\n",min);
    return 0;    
}