#include <stdio.h>
#include <stdlib.h>
void bSort(int *s, int n) {
  int temp;
  for (int i = 0; i < (n - 1); ++i) {
    int swapped = 0;
    for (int j = 0; j < (n - i - 1); ++j) {
      temp = *(s + j);
      if (temp > *(s + j + 1)) {
        *(s + j) = *(s + j + 1);
        *(s + j + 1) = temp;
        swapped = 1;
      }
    }
    if (swapped == 0) {
      break;
    }
  }
}
int main() {
  int *ptr, n;
  printf("Enter size of Array: ");
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
  printf("Enter Elements of Array: \n");
  for (int i = 0; i < n; ++i) {
    scanf("%d", ptr + i);
  }
  bSort(ptr, n);
  printf("Sorted Array: ");
  for (int i = 0; i < n; ++i) {
    printf("%d ", *(ptr + i));
  }
  printf("\n");
  free(ptr);
  return 0;
}