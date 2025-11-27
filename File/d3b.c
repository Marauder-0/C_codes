// C program to implement cel to fah or fah to cel , by menu driven code
#include<stdio.h>
int main(void)
{
int choice;
float cel,fah,temp;
printf("Choose from the Following\n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n");
scanf("%d", &choice);
if(choice == 1)
{
 printf("Enter a temperature in Celsius\n");
 scanf("%f", &temp);
 fah = (1.8*temp)+32;
 printf("Fahrenheit = %f\n", fah);
}
if(choice == 2)
{
 printf("Enter a temperature in Fahrenheit\n");
 scanf("%f", &temp);
 cel = ((temp-32)*5)/9;
 printf("Celsius = %f\n", cel);
}
if(choice <= 0 || choice > 2)
{
 printf("Enter correct choice.\n");
}
return 0;
}

