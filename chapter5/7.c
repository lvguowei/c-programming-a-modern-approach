#include <stdio.h>

int main() {
  int a1, a2, a3, a4, min1, max1, min2, max2, min, max;
  printf("Enter four integers: ");
  scanf("%d %d %d %d", &a1, &a2, &a3, &a4);

  if (a1 < a2) {
    min1 = a1;
    max1 = a2;
  } else {
    min1 = a2;
    max1 = a1;
  }

  if (a3 < a4) {
    min2 = a3;
    max2 = a4;
  } else {
    min2 = a4;
    max2 = a3;
  }

  if (min1 < min2) {
    min = min1;
  } else {
    min = min2;
  }

  if (max1 < max2) {
    max = max2;
  } else {
    max = max1;
  }

  printf("Min is %d, max is %d\n", min, max);
}
