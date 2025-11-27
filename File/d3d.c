// C Program to implement Accept five marks find out total and division -
// If per >=60  Ist DIVISION
// per >=45     IInd DIVISION
// per>=33      IIIrd Division
// per<33       FAIL
#include<stdio.h>
int main(void)
{
int eng,comp,math,phy,chem,total;
float per;
printf("Enter Marks for English\n");
scanf("%d", &eng);
printf("Enter Marks for Computer\n");
scanf("%d", &comp);
printf("Enter Marks for Mathematics\n");
scanf("%d", &math);
printf("Enter Marks for Physics\n");
scanf("%d", &phy);
printf("Enter Marks for Chemistry\n");
scanf("%d", &chem);
total = eng+comp+math+phy+chem;
per = (total/5);
printf("Total number: %d\nPercentage: %f\n",total,per);
if(per>=60 && per<=100)
{
 printf("Ist DISIVION\n");
}
else if(per>=45 && per<=59)
{
 printf("IInd DISIVION\n");
}
else if(per>=33 && per<=44)
{
 printf("IIIrd DISIVION\n");
}
else if(per<33)
{
 printf("FAIL\n");
}
return 0;
}

