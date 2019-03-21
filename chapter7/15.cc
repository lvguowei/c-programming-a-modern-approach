#include <stdio.h>

int main() {
  int n;
  int result = 1;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  while (n > 0) {
    result *= n;
    n--;
  }

  printf("Factorial of %d: %d\n", n, result);
}
