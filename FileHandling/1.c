#include<stdio.h>
int main()
{
    FILE*ptr = fopen("factorial.c","w");
    char str[] = "#include<stdio.h>\nint main(){\nint num,fact=1;\nprintf(Enter Number: );\nscanf(%d,&num);\nfor(int i=1;i<=num;++i){\nfact = fact*i;\n}\nprintf(Factorial is %d,fact);\nreturn 0;\n}";
    fputs(str,ptr);
    return 0;
}