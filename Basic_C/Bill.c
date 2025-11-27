/* C program to generate bill
 for first 50 unit rate = 5.5
 for nexst 120 unit rate = 7.5
 for next 120 unit rate = 8.5
 for above 290 rate = 9.5
 and additional subcharge of 25% */
 #include<stdio.h>
 int main()
{
    int unit;
    float bill,total_bill,subcharge;
    printf("enter value of unit\n");
    scanf("%d",&unit);
    if(unit<=0)
    {
        printf("Invalid Reading\n");
    }
    else if(unit<=50)
    {
        bill = unit*5.5;
    }
    else if(unit<=170)
    {
        bill = (50*5.5) + (unit-50)*7.5;
    }
    else if(unit<=290)
    {
        bill = (50*5.5) + (120*7.5) + (unit-170)*8.5;
    }
    else if(unit>290)
    {
        bill = (50*5.5) + (120*7.5) + (120*8.5) + (unit-290)*9.5;
    }
    subcharge = bill*0.25;
    total_bill = subcharge + bill;
    printf("Final Payable Amount is %f", total_bill);
    return 0;
}
