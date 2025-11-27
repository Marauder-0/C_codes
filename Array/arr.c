/* //program to read 10 integers into an array and print all elements.
#include<stdio.h>
int main()
{
    int i[11] = {1,2,3,4,5,6,7,8,9,10};
    int j;
    for(j=0;j<=9;++j)
    {
        printf("%d ", i[j]);
    }
    return 0;
}  */

/*  //program to find the largest element in an array of N integers.
#include <stdio.h>
int main() {
    int num[50], n, i, max;

    printf("Enter the number of integers you wish to enter (max 50): ");
    scanf("%d", &n);

    if (n > 0 && n <= 50) 
    {
        printf("Enter %d integers:\n", n);
        for (i = 0; i < n; ++i) 
        {
            scanf("%d", &num[i]);
        }
        max = num[0];
        for (i = 1; i < n; ++i) 
        {
            if (num[i] > max) 
            {
                max = num[i];
            }
        }
        printf("The largest element is: %d\n", max);
    } 
    else 
    {
        printf("Invalid input.\n");
    }
    return 0;
}    */


/* //C program to find the smallest element in an array.
#include<stdio.h>
int main()
{
    int num[50], i, n, min;
    printf("Enter the number of integers you wish to enter (max 50): ");
    scanf("%d", &n);

    if (n > 0 && n <= 50) 
    {
        printf("Enter %d integers:\n", n);
        for (i = 0; i < n; ++i) 
        {
            scanf("%d", &num[i]);
        }
        min = num[0];
        for(i = 1; i<n;++i)
        {
            if(num[i]< min)
            {
                min = num[i];
            }
        }
        printf("The smallest element is %d\n", min);
    }
    else
    {
        printf("Invalid Input.\n");
    }
}    */