#include <stdio.h>

int main() {
  float e = 1;
  int n;

  printf("Enter n: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    int fact = 1;
    for (int j = 1; j <= i; j++) {
      fact *= j;
    }
    e += (1.0f / fact);
  }

  printf("%f\n", e);
}
