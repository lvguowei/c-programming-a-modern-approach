#include <stdio.h>

int main() {
  double n, sum = 0;
  printf("This program sums a series of doubles. \n");
  printf("Enter integers (0 to terminate): ");
  scanf("%lf", &n);
  while (n != 0) {
    sum += n;
    scanf("%lf", &n);
  }
  printf("The sum is: %f\n", sum);
}
