// C prorgram to implemetn threee digit number and find out reverse number
#include<stdio.h>
int main(void)
{
int i,a,b,c,rev,temp;
printf("Enter any 3 digit number\n");
scanf("%d", &i);
temp = i;
a = i%10;
i = i/10;
b = i%10;
i = i/10;
c = i%10;
rev = (a*100)+(b*10)+(c*1);
printf("Reverse of %d is %d.\n", temp,rev);
return 0;
}

