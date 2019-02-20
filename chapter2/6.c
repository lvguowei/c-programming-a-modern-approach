#include<stdio.h>

int main() {
  int x;
  printf("Input x: ");
  scanf("%d", &x);
  int result = ((((3 * x + 2) * x - 5) * 5 - 1) * x + 7) * x - 6;
  printf("%d\n", result);
}
