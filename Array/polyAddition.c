#include <stdio.h>
#include <stdlib.h>
void polyadd(int *poly1, int p1size, int *poly2, int p2size) {
  int p3size = 0;
  if (p1size >= p2size) {
    p3size = p1size;
  } else {
    p3size = p2size;
  }
  int *poly3;
  poly3 = (int *)malloc(p3size * sizeof(int));
  if (poly3 == NULL) {
    printf("Memory Allocation Failed!\n");
    return;
  }
  for (int i = 0; i < p3size; ++i) {
    if (p2size <= i) {
      *(poly3 + i) = *(poly1 + i);
    } else if (p1size <= i) {
      *(poly3 + i) = *(poly2 + i);
    } else {
      *(poly3 + i) = *(poly1 + i) + *(poly2 + i);
    }
  }
  printf("Sum of the Polynomials is: ");
  for (int i = p3size - 1; i >= 0; i--) {
    if (*(poly3 + i) != 0) {
      if (i == 0) {
        printf("%d", *(poly3 + i));
      } else if (i == 1) {
        printf("%dx + ", *(poly3 + i));
      } else {
        printf("%dx^%d + ", *(poly3 + i), i);
      }
    }
  }
  printf("\n");
  free(poly3);
}
int main() {
  int a1, a2, *arr1, *arr2;
  printf("Size of First Array: ");
  scanf("%d", &a1);
  arr1 = (int *)malloc(a1 * sizeof(int));
  if (arr1 == NULL) {
    printf("Memory Allocation Failed!\n");
    return 1;
  }
  printf("Size of Second Array: ");
  scanf("%d", &a2);
  arr2 = (int *)malloc(a2 * sizeof(int));
  if (arr2 == NULL) {
    printf("Memory Allocation Failed!\n");
    return 1;
  }
  printf("Enter Values for Array 1: \n");
  for (int i = 0; i < a1; ++i) {
    scanf("%d", arr1 + i);
  }
  printf("Enter Values for Array 2: \n");
  for (int i = 0; i < a2; ++i) {
    scanf("%d", arr2 + i);
  }
  polyadd(arr1, a1, arr2, a2);
  free(arr1);
  free(arr2);
  return 0;
}
