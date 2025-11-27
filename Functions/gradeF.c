#include<stdio.h>
char grade(int a)
{
    char A,B,C,D,F;
    if(a >= 90 && a <= 100)
    {
        return 'A';
    }
    else if(a >= 70)
    {
        return 'B';
    }
    else if(a >= 50)
    {
        return 'C';
    }
    else if (a >= 33)
    {
        return 'D';
    }
    else if(a < 33)
    {
        return 'F';
    }
}
void main()
{
    int i;
    char R;
    printf("Enter Total Marks: ");
    scanf("%d",&i);

    R = grade(i);
    printf("Grade: %c",R);
}