#include <stdio.h>

int main() {
  int nominator, denominator;
  printf("Enter a fraction: ");
  scanf("%d/%d", &nominator, &denominator);

  int m = nominator;
  int n = denominator;

  while (n != 0) {
    int remainder = m % n;
    m = n;
    n = remainder;
  }

  printf("In lowest terms: %d/%d\n", nominator / m, denominator / m);
}
