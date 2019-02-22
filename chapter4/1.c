#include <stdio.h>

int main() {
  int n;
  printf("Enter a two-digit number:");
  scanf("%d", &n);

  int high = n / 10;
  int low = n % 10;

  printf("The reversal is: %d%d\n", low, high);
}
