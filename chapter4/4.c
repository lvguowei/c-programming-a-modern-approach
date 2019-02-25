#include <stdio.h>

int main() {
  int n;
  int n1, n2, n3, n4, n5;
  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &n);

  n1 = n % 8;
  n2 = (n / 8) % 8;
  n3 = (n / 8 / 8) % 8;
  n4 = (n / 8 / 8 / 8) % 8;
  n5 = (n / 8 / 8 / 8 / 8) % 8;

  printf("Inoctal, your number is: %d%d%d%d%d\n", n5, n4, n3, n2, n1);
}
