#include <stdio.h>
#include <stdlib.h>
struct node {
  int info;
  struct node *next, *prev;
} *start = NULL;
void insertBegin(int value);
void insertEnd(int value);
void insertAfter(int key, int value);
// void deleteBegin();
// void deleteEnd();
// void deleteGiven(int key);
void traversal();
// void reversal();
// void searching(int key);
int main() {
  int choice, key, value;
  while (1) {
    printf("1. Insert node at Beginning.\n");
    printf("2. Insert node at End.\n");
    printf("3. Insert node after given Node.\n");
    printf("4. Delete First Node.\n");
    printf("5. Delete Last Node.\n");
    printf("6. Delete Given Node.\n");
    printf("7. Reverse.\n");
    printf("8. Display List.\n");
    printf("9. Search an Element.\n");
    printf("10. Exiting Program.\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      printf("Enter value for New Node: ");
      scanf("%d", &value);
      insertBegin(value);
      traversal();
      break;
    case 2:
      printf("Enter value for New Node: ");
      scanf("%d", &value);
      insertEnd(value);
      traversal();
      break;
    case 3:
      printf("Enter value for New Node: ");
      scanf("%d", &value);
      printf("Enter Key Node: ");
      scanf("%d", &key);
      insertAfter(key, value);
      traversal();
      break;
    // case 4:
    //   printf("Deleting FIrst Node..\n");
    //   deleteBegin();
    //   traversal();
    //   break;
    // case 5:
    //   printf("Deleting Last Node..\n");
    //   deleteEnd();
    //   traversal();
    //   break;
    // case 6:
    //   printf("Enter Node's value to be deleted: ");
    //   scanf("%d", &key);
    //   deleteGiven(key);
    //   traversal();
    //   break;
    // case 7:
    //   printf("Reversed Linked List: \n");
    //   reversal();
    //   break;
    case 8:
      traversal();
      break;
    // case 9:
    //   printf("Enter Key to be Searched in List: ");
    //   scanf("%d", &key);
    //   searching(key);
    //   break;
    case 10:
      printf("Exiting Program..\n");
      return 0;
      break;
    default:
      printf("Invalid Choice, Choose Between (1-9).\n");
      break;
    }
    printf("\n");
  }
  return 0;
}
void insertBegin(int value) {
  struct node *newnode;
  newnode = (struct node *)malloc(sizeof(struct node));
  newnode->info = value;
  if (start == NULL) {
    newnode->next = newnode;
    newnode->prev = newnode;
    start = newnode;
  } else {
    newnode->prev = start->prev;
    newnode->next = start;
    start->prev->next = newnode;
    start->prev = newnode;
    start = newnode;
  }
}
void insertEnd(int value) {
  struct node *newnode;
  newnode = (struct node *)malloc(sizeof(struct node));
  newnode->info = value;
  if (start == NULL) {
    newnode->next = newnode;
    newnode->prev = newnode;
    start = newnode;
  } else {
    newnode->next = start->prev->next;
    newnode->prev = start->prev;
    start->prev->next = newnode;
    start->prev = newnode;
  }
}
void insertAfter(int key, int value) {
  struct node *newnode;
  newnode = (struct node *)malloc(sizeof(struct node));
  newnode->info = value;
  struct node *temp = start, *t1 = NULL;
  if (start == NULL) {
    printf("Empty List\n");
    free(newnode);
    return;
  } else {
    while (temp->info != key) {
      t1 = temp;
      temp = temp->next;
      if (temp == start) {
        break;
      }
    }
    if (temp == start && temp->info != key) {
      printf("Key not Found!!\n");
      free(newnode);
      return;
    } else if (t1 != NULL) {
      newnode->next = temp->next;
      temp->next->prev = newnode;
      temp->next = newnode;
      newnode->prev = temp;
    } else {
      newnode->next = start->next;
      start->next->prev = newnode;
      start->next = newnode;
      newnode->prev = start;
    }
  }
}
void traversal() {
  struct node *ptr = start;
  printf("==============================================\n");
  if (ptr == NULL) {
    printf("Empty List!\n");
    return;
  } else {
    printf("%d ", ptr->info);
    ptr = ptr->next;
  }
  while (ptr != start) {
    printf("%d ", ptr->info);
    ptr = ptr->next;
  }
  printf("\n==============================================\n");
}