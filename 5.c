#include <stdio.h>

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  printf("The reversal is: ");

  do {
    printf("%d", n % 10);
    n /= 10;
  } while (n != 0);

  printf("\n");
}
