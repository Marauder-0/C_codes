#include <stdio.h>
#include <stdlib.h>
void iSort(int *s, int n) {
  for (int i = 1; i < n; ++i) {
    int min = *(s + i);
    int j = i - 1;
    while (j >= 0 && *(s + j) > min) {
      *(s + j + 1) = *(s + j);
      j--;
    }
    *(s + j + 1) = min;
  }
}
int main() {
  int *ptr, n;
  printf("Enter Array Size: ");
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
  iSort(ptr, n);
  printf("Sorted Array: ");
  for (int i = 0; i < n; ++i) {
    printf("%d ", *(ptr + i));
  }
  printf("\n");
  free(ptr);
  return 0;
}