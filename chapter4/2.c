#include <stdio.h>

int main() {
  int n;
  printf("Enter a three-digit number: ");
  scanf("%d", &n);

  int n3 = n / 100;
  int n2 = (n - n3 * 100) / 10;
  int n1 = n % 10;

  printf("The reversal is: %d%d%d\n", n1, n2, n3);
}
