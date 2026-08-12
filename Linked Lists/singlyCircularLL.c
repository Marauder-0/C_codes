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
void searching(int key);
int main() {
  int choice, key, value;
  while (1) {
    printf("1. Insertion at the Beginning.\n");
    printf("2. Insertion at the End.\n");
    printf("3. Insertion after the Given key Node.\n");
    printf("4. Delete first Node.\n");
    printf("5. Delete Last Node.\n");
    printf("6. Delete give Key Node.\n");
    printf("7. Display List.\n");
    printf("8. Search a Key.\n");
    printf("9. Exit Program.\n");
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
      printf("Enter Key to be Searched: ");
      scanf("%d", &key);
      searching(key);
      break;
    case 9:
      printf("Exiting Program..\n");
      return 0;
      break;
    default:
      printf("Invalid Choice, Choose between(1-8)\n");
      break;
    }
  }
  return 0;
}
void insertBegin(int value) {
  struct node *newnode;
  newnode = (struct node *)malloc(sizeof(struct node));
  newnode->info = value;
  if (start == NULL) {
    newnode->next = newnode;
    start = newnode;
  } else {
    struct node *temp = start;
    while (temp->next != start) {
      temp = temp->next;
    }
    newnode->next = start;
    temp->next = newnode;
    start = newnode;
  }
}
void insertEnd(int value) {
  struct node *newnode;
  newnode = (struct node *)malloc(sizeof(struct node));
  newnode->info = value;
  if (start == NULL) {
    newnode->next = newnode;
    start = newnode;
  } else {
    struct node *temp = start;
    while (temp->next != start) {
      temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
  }
}
void insertAfter(int key, int value) {
  struct node *newnode;
  newnode = (struct node *)malloc(sizeof(struct node));
  newnode->info = value;
  if (start == NULL) {
    printf("Key Not found!!\n");
    return;
  } else {
    struct node *temp = start;
    while (temp->info != key) {
      temp = temp->next;
      if (temp == start) {
        break;
      }
    }
    if (temp == start) {
      return;
    } else {
      newnode->next = temp->next;
      temp->next = newnode;
    }
  }
}
void deleteBegin() {
  struct node *temp = start, *t1 = start;
  if (start == NULL) {
    printf("empty list\n");
    return;
  } else if (start->next == start) {
    start = NULL;
    free(temp);
    return;
  } else {
    while (t1->next != start) {
      t1 = t1->next;
    }
    start = start->next;
    t1->next = start;
    printf("Deleted: %d\n", temp->info);
    free(temp);
    return;
  }
}
void deleteEnd() {
  if (start == NULL) {
    printf("Empty List\n");
    return;
  }
  struct node *temp = start, *t1;
  if (start->next == start) {
    start = NULL;
    free(temp);
    return;
  } else {
    while (temp->next != start) {
      t1 = temp;
      temp = temp->next;
    }
    t1->next = temp->next;
    printf("Deleted: %d\n", temp->info);
    free(temp);
    return;
  }
}
void deleteGiven(int key) {
  if (start == NULL) {
    printf("Empty List\n");
    return;
  }
  struct node *temp = start, *t1 = NULL;
  while (temp->info != key) {
    t1 = temp;
    temp = temp->next;
    if (temp == start) {
      break;
    }
  }
  if (temp == start && temp->info != key) {
    printf("Key Not Found!!\n");
    return;
  } else if (t1 != NULL) {
    t1->next = temp->next;
  } else {
    start = NULL;
  }
  printf("Deleted: %d\n", temp->info);
  free(temp);
  return;
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
void searching(int key) {
  if (start == NULL) {
    printf("List is Empty!!\n");
    return;
  }
  int i = 1;
  struct node *temp = start;
  while (temp->next != start && temp->info != key) {
    i += 1;
    temp = temp->next;
  }
  if (temp->info == key) {
    printf("Key Found at Node: %d\n", i);
  } else {
    printf("Key not Found!!\n");
  }
  return;
}