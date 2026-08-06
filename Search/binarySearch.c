#include <stdio.h>
#include <stdlib.h>
void bSearch(int *arr, int n, int key) {
  int start = 0, end, mid, found = 0;
  end = n - 1;
  while (start <= end) {
    mid = (start + end) / 2;
    if (*(arr + mid) == key) {
      ++found;
      break;
    } else if (*(arr + mid) < key) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  if (found) {
    printf("Key found at Index: %d\n", mid);
  } else {
    printf("Key not found!\n");
  }
}
int main() {
  int *ptr, sz, target;
  printf("Enter size of Array: ");
  scanf("%d", &sz);
  if (sz <= 0) {
    printf("Invalid array size!\n");
    return 1;
  }
  ptr = (int *)malloc(sz * sizeof(int));
  if (ptr == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
  }
  printf("Enter array Elements: \n");
  for (int i = 0; i < sz; ++i) {
    scanf("%d", ptr + i);
  }
  printf("Enter key to be Searched: ");
  scanf("%d", &target);
  bSearch(ptr, sz, target);
  free(ptr);
  return 0;
}