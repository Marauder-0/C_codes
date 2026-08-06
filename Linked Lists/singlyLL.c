#include <stdio.h>
#include <stdlib.h>
struct node {
  int info;
  struct node *next;
} *start = NULL;
void insertBegin(int value);
void insertEnd(int value);
void insertAfter(int key, int value);
void deleteBegin();
void deleteEnd();
void deleteGiven(int key);
void traversal();
int main() {
  int choice, key, value;
  while (1) {
    printf("1. Inserttion at the Beginning.\n");
    printf("2. Insertion at the End.\n");
    printf("3. Insertion after the Given key Node.\n");
    printf("4. Delete first Node.\n");
    printf("5. Delete Last Node.\n");
    printf("6. Delete give Key Node.\n");
    printf("7. Display List.\n");
    printf("8. Exit Program.\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      printf("Enter value of Node: ");
      scanf("%d", &value);
      insertBegin(value);
      traversal();
      break;
    case 2:
      printf("Enter value of Node: ");
      scanf("%d", &value);
      insertEnd(value);
      traversal();
      break;
    case 3:
      printf("Enter value of Node: ");
      scanf("%d", &value);
      printf("Enter key after which Node will be added: ");
      scanf("%d", &key);
      insertAfter(key, value);
      traversal();
      break;
    case 4:
      printf("Deleting First Node.\n");
      deleteBegin();
      traversal();
      break;
    case 5:
      printf("Deleting Last Node.\n");
      deleteEnd();
      traversal();
      break;
    case 6:
      printf("Enter Key node to be Deleted: ");
      scanf("%d", &key);
      printf("Deleting Node at key <%d>.\n", key);
      deleteGiven(key);
      traversal();
      break;
    case 7:
      traversal();
      break;
    case 8:
      printf("Exiting Program..\n");
      return 0;
      break;
    default:
      printf("Invalid Choice, Choose between(1-8)\n");
      return 0;
    }
  }
  return 0;
}
void insertBegin(int value) {
  struct node *newnode = NULL;
  newnode = (struct node *)malloc(sizeof(struct node));
  newnode->info = value;
  if (start == NULL) {
    newnode->next = NULL;
    start = newnode;
    return;
  } else {
    newnode->next = start;
    start = newnode;
  }
}
void insertEnd(int value) {
  struct node *newnode = NULL;
  newnode = (struct node *)malloc(sizeof(struct node));
  newnode->info = value;
  if (start == NULL) {
    newnode->next = NULL;
    start = newnode;
    return;
  } else {
    struct node *temp = start;
    newnode->next = NULL;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = newnode;
  }
}
void insertAfter(int key, int value) {
  struct node *newnode = NULL;
  struct node *temp = start;
  newnode = (struct node *)malloc(sizeof(struct node));
  newnode->info = value;
  if (start == NULL) {
    newnode->next = NULL;
    start = newnode;
    return;
  }
  while (temp != NULL && temp->info != key) {
    temp = temp->next;
  }
  if (temp == NULL) {
    printf("Node with value %d is not Found.\n", key);
  } else {
    newnode->next = temp->next;
    temp->next = newnode;
  }
}
void deleteBegin() {
  if (start == NULL) {
    return;
  } else {
    start = start->next;
  }
}
void deleteEnd() {
  struct node *temp = start, *t1 = NULL;
  if (start == NULL) {
    return;
  } else if (start->next == NULL) {
    start = NULL;
    free(temp);
  } else {
    while (temp->next != NULL) {
      t1 = temp;
      temp = temp->next;
    }
    t1->next = temp->next;
    printf("Node Deleted is : %d.\n", temp->info);
    free(temp);
  }
}
void deleteGiven(int key) {
  if (start == NULL) {
    return;
  }
  struct node *temp = start, *t1 = NULL;
  while (temp != NULL && temp->info != key) {
    t1 = temp;
    temp = temp->next;
  }
  if (temp == NULL) {
    return;
  } else if (t1 != NULL) {
    t1->next = temp->next;
  } else {
    start = temp->next;
  }
  free(temp);
}
void traversal() {
  struct node *ptr = start;
  printf("==============================================\n");
  while (ptr != NULL) {
    printf("%d ", ptr->info);
    ptr = ptr->next;
  }
  printf("\n==============================================\n");
}