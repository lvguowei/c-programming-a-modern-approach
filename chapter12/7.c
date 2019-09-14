#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main() {
  int b[N], i, big, small;
  printf("Enter %d numbers: ", N);

  for (i = 0; i < N; i++) {
    scanf("%d", &b[i]);
  }

  max_min(b, N, &big, &small);
  printf("Largest: %d\n", big);
  printf("Smallest: %d\n", small);

  return 0;
}

void max_min(int a[], int n, int *max, int *min) {
  int *p = a;

  *max = *min = *p++;
  while (p < &a[n]) {
    if (*p > *max) {
      *max = *p;
    } else if (*p < *min) {
      *min = *p;
    }
    p++;
  }
}
