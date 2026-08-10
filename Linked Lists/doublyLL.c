#include <stdio.h>
#include <stdlib.h>
struct node {
  int info;
  struct node *prev;
  struct node *next;
} *start = NULL;
void insertBegin(int value);
void insertEnd(int value);
void insertAfter(int key, int value);
void deleteBegin();
void deleteEnd();
void deleteGiven(int key);
void reversal();
void traversal();
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
    printf("9. Exiting Program.\n");
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
    case 4:
      printf("Deleting FIrst Node..\n");
      deleteBegin();
      traversal();
      break;
    case 5:
      printf("Deleting Last Node..\n");
      deleteEnd();
      traversal();
      break;
    case 6:
      printf("Enter Node's value to be deleted: ");
      scanf("%d", &key);
      deleteGiven(key);
      traversal();
      break;
    case 7:
      printf("Reversed Linked List: \n");
      reversal();
      break;
    case 8:
      traversal();
      break;
    case 9:
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
  newnode->prev = NULL;
  if (start == NULL) {
    newnode->next = NULL;
    start = newnode;
  } else {
    start->prev = newnode;
    newnode->next = start;
    start = newnode;
  }
}
void insertEnd(int value) {
  struct node *newnode;
  newnode = (struct node *)malloc(sizeof(struct node));
  newnode->info = value;
  newnode->next = NULL;
  if (start == NULL) {
    newnode->prev = NULL;
    start = newnode;
  } else {
    struct node *temp = start;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
  }
}
void insertAfter(int key, int value) {
  struct node *newnode, *temp = start;
  newnode = (struct node *)malloc(sizeof(struct node));
  newnode->info = value;
  if (start == NULL) {
    printf("List was Empty!!\n");
    newnode->prev = NULL;
    newnode->next = NULL;
    start = newnode;
    return;
  }
  while (temp != NULL && temp->info != key) {
    temp = temp->next;
  }
  if (temp == NULL) {
    printf("Key not Found!! Hence cannot Insert new Element.\n");
    free(newnode);
    return;
  } else {
    newnode->next = temp->next;
    newnode->prev = temp;
    if (temp->next != NULL) {
      temp->next->prev = newnode;
    }
    temp->next = newnode;
  }
}
void deleteBegin() {
  if (start == NULL) {
    printf("List was Empty!!\n");
    return;
  }
  struct node *temp = start;
  start = start->next;
  if (start != NULL) {
    start->prev = NULL;
  }
  free(temp);
}
void deleteEnd() {
  if (start == NULL) {
    printf("List was Empty!!\n");
    return;
  }
  struct node *temp = start;
  if (start->next == NULL) {
    start = NULL;
  } else {
    struct node *t1;
    while (temp->next != NULL) {
      t1 = temp;
      temp = temp->next;
    }
    t1->next = NULL;
  }
  printf("\nDeleted Node %d\n", temp->info);
  free(temp);
}
void traversal() {
  struct node *temp = start;
  printf("=======================================\n");
  while (temp != NULL) {
    printf("%d ", temp->info);
    temp = temp->next;
  }
  printf("\n=======================================\n");
}
void deleteGiven(int key) {
  if (start == NULL) {
    return;
  }
  struct node *temp = start;
  while (temp != NULL && temp->info != key) {
    temp = temp->next;
  }
  if (temp == NULL) {
    printf("\nKey Not found!\n");
    return;
  }
  if (temp == start) {
    start = temp->next;
  } else {
    temp->prev->next = temp->next;
  }
  if (temp->next != NULL) {
    temp->next->prev = temp->prev;
  }
  printf("Deleted Node: %d\n", temp->info);
  free(temp);
}
void reversal() {
  struct node *temp = start;
  if (start == NULL) {
    printf("List is Empty!\n");
    return;
  }
  while (temp->next != NULL) {
    temp = temp->next;
  }
  printf("=======================================\n");
  while (temp != NULL) {
    printf("%d ", temp->info);
    temp = temp->prev;
  }
  printf("\n=======================================\n");
}