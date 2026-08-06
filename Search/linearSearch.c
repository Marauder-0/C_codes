#include <stdio.h>
#include <stdlib.h>
void lsearch(int *arr, int n, int key) {
  for (int i = 0; i < n; ++i) {
    if (*(arr + i) == key) {
      printf("Key found at Index: %d\n", i);
      break;
    } else {
      if (i == n - 1) {
        printf("Key not Found!\n");
      }
      continue;
    }
  }
}
int main() {
  int *ptr, n, target;
  printf("Enter Size of Array: ");
  scanf("%d", &n);
  if (n <= 0) {
    printf("Invalid array size!\n");
    return 1;
  }
  ptr = (int *)malloc(n * sizeof(int));
  if (ptr == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
  }
  printf("Enter Array Elements: \n");
  for (int i = 0; i < n; ++i) {
    scanf("%d", ptr + i);
  }
  printf("Enter key to be Searched: ");
  scanf("%d", &target);
  lsearch(ptr, n, target);
  free(ptr);
  return 0;
}