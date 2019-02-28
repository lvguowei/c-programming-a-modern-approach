#include <stdio.h>

int main() {
  int m, n;
  printf("Enter two integers: ");
  scanf("%d%d", &m, &n);

  while (n != 0) {
    int remainder = m % n;
    m = n;
    n = remainder;
  }

  printf("Greatest common divisor: %d\n", m);
}
