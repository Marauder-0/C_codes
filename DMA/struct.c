#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct class
{
    char n[30];
    int roll;
    int marks;
};
int main()
{
    struct class*ptr;
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);

    ptr = (struct class*)malloc(n*sizeof(struct class));
    if(ptr == NULL)
    {
        printf("Failure in Memory Allocation.\n");
        exit(0);
    }
    printf("Enter Details for %d students: \n",n);
    getchar();
    for(int i=0;i<n;++i)
    {
        printf("Enter Student %d Name: ",i+1);
        fgets((ptr+i)->n,sizeof((ptr+i)->n),stdin);
        (ptr+i)->n[strcspn((ptr+i)->n,"\n")] = '\0';
        printf("\nEnter Student %d Roll Number: ",i+1);
        scanf("%d",&(ptr+i)->roll);
        getchar();
        printf("\nEnter Student %d Marks: ",i+1);
        scanf("%d",&(ptr+i)->marks);
        getchar();
    }
    printf("Passed Students are: \n");
    for(int i=0;i<n;++i)
    {
        if((ptr+i)->marks > 75)
        {
            printf("%s\t%d\t%d\n",(ptr+i)->n,(ptr+i)->roll,(ptr+i)->marks);
        }
    }
    free(ptr);
    return 0;
}