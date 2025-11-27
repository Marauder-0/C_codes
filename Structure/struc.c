//C program to implement structure
#include<stdio.h>
struct book
{
    char name[50];
    char author[50];
    int chapters;
};
int main()
{
    struct book book1;
    //Assign Values
    printf("Enter Name of book: ");
    gets(book1.name);
    printf("\n");
    printf("Enter Author's Name: ");
    gets(book1.author);
    printf("\n");
    printf("Enter Chapter for this Book: ");
    scanf("%d",&book1.chapters);
    printf("\n");
    //Access Values
    printf("The Book '%s' who's Author is '%s' have %d Chapters.",book1.name,book1.author,book1.chapters);
    /* The Book 'Lord of the Mysteries' who's Author is 'Cuttlefsh That loves Diving' have 1432 Chapters. */
    return 0;
}