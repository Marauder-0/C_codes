#include <stdio.h>
#include <stdlib.h>
struct node {
  int coeff, exp;
  struct node *next;
} *start1 = NULL, *start2 = NULL, *start3 = NULL;
void insertEnd(struct node **head, int coeff, int exp) {
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  newnode->coeff = coeff;
  newnode->exp = exp;
  newnode->next = NULL;

  if (*head == NULL) {
    *head = newnode;
    return;
  } else {
    struct node *temp = *head;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = newnode;
  }
}
void display(struct node *head) {
  if (head == NULL) {
    printf("0\n");
    return;
  }
  struct node *temp = head;
  while (temp != NULL) {
    if (temp->exp == 0) {
      printf("%d", temp->coeff);
    } else if (temp->exp == 1) {
      printf("%dx", temp->coeff);
    } else {
      printf("%dx^%d", temp->coeff, temp->exp);
    }

    if (temp->next != NULL && temp->next->coeff >= 0) {
      printf(" + ");
    }
    temp = temp->next;
  }
  printf("\n");
}
struct node *polyadd(struct node *poly1, struct node *poly2) {
  struct node *poly3 = NULL;
  struct node *p1 = poly1, *p2 = poly2;
  while (p1 != NULL && p2 != NULL) {
    if (p1->exp == p2->exp) {
      int sumCoeff = p1->coeff + p2->coeff;
      if (sumCoeff != 0) {
        insertEnd(&poly3, sumCoeff, p1->exp);
      }
      p1 = p1->next;
      p2 = p2->next;
    } else if (p1->exp > p2->exp) {
      insertEnd(&poly3, p1->coeff, p1->exp);
      p1 = p1->next;
    } else if (p2->exp > p1->exp) {
      insertEnd(&poly3, p2->coeff, p2->exp);
      p2 = p2->next;
    }
  }
  while (p1 != NULL) {
    insertEnd(&poly3, p1->coeff, p1->exp);
    p1 = p1->next;
  }
  while (p2 != NULL) {
    insertEnd(&poly3, p2->coeff, p2->exp);
    p2 = p2->next;
  }
  return poly3;
}
int main() {
  int n1, n2, coeff, exp;
  // 1st Linked List
  printf("Enter number of terms for Polynomial 1: ");
  scanf("%d", &n1);
  printf("Enter each term as 'coeff exp' in descending order of exponent:\n");
  for (int i = 0; i < n1; ++i) {
    printf("Term %d: ", i + 1);
    scanf("%d %d", &coeff, &exp);
    insertEnd(&start1, coeff, exp);
  }
  // 2nd Linked List
  printf("\nEnter number of terms for Polynomial 2: ");
  scanf("%d", &n2);
  printf("Enter each term as 'coeff exp' in descending order of exponent:\n");
  for (int i = 0; i < n2; ++i) {
    printf("Term %d: ", i + 1);
    scanf("%d %d", &coeff, &exp);
    insertEnd(&start2, coeff, exp);
  }
  printf("\nPoly 1: ");
  display(start1);
  printf("Poly 2: ");
  display(start2);
  // Adding Polynomials
  start3 = polyadd(start1, start2);
  printf("\nResultant Poly (Sum): ");
  display(start3);
  return 0;
}
