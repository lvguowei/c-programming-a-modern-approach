#include <stdio.h>

int main() {
  int n;
  int numberOfDigits = 0;
  printf("Enter a number: ");
  scanf("%d", &n);

  if (n >= 0 && n <= 9) {
    numberOfDigits = 1;
  } else if (n >= 10 && n <= 99) {
    numberOfDigits = 2;
  } else if (n >= 100 && n <= 999) {
    numberOfDigits = 3;
  } else if (n >= 1000 && n <= 9999) {
    numberOfDigits = 4;
  }

  printf("The number %d has %d digits\n", n, numberOfDigits);
}
