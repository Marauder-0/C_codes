#include <stdio.h>
#include <stdlib.h>
void sSort(int *s, int n) {
  int min, temp;
  for (int i = 0; i < (n - 1); ++i) {
    min = i;
    temp = *(s + i);
    for (int j = (i + 1); j < n; ++j) {
      if (temp > *(s + j)) {
        min = j;
        temp = *(s + j);
      }
    }
    if (i != min) {
      *(s + min) = *(s + i);
      *(s + i) = temp;
    }
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
  sSort(ptr, n);
  printf("Sorted Array: ");
  for (int i = 0; i < n; ++i) {
    printf("%d ", *(ptr + i));
  }
  printf("\n");
  free(ptr);
  return 0;
}