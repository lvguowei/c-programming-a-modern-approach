#include <stdio.h>
#include <math.h>

int polynomial(int x);

int main() {
  int x;
  printf("Enter x: ");
  scanf("%d", &x);
  printf("Result is: %d\n", polynomial(x));
}

int polynomial(int x) {
  return 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;
}
