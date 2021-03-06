#include <stdio.h>
#include <stdlib.h>

int compare(const void *p, const void *q) {
  const int *p1 = p;
  const int *q1 = q;
  return *p1 - *q1;
} 

int main() {
  int a[100];

  for (int i = 0; i < 100; i++) {
    a[i] = 100 - i;
  }

  qsort(&a[50], 50, sizeof(a[0]), compare);

  for (int i = 0; i < 100; i++) {
    printf("%d\n", a[i]);
  }
}
