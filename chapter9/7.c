#include <stdio.h>

int power(int x, int n);

int polynomial(int x);

int main() {
  int x;
  printf("Enter x: ");
  scanf("%d", &x);
  printf("Result is: %d\n", polynomial(x));
}

int power(int x, int n) {
  if (n == 0) {
    return 1;
  } else if (n % 2 == 0) {
    return power(x, n / 2) * power(x, n / 2);
  } else {
    return x * power(x, n - 1);
  }
}

int polynomial(int x) {
  return 3 * power(x, 5) + 2 * power(x, 4) - 5 * power(x, 3) - power(x, 2) +
         7 * x - 6;
}
