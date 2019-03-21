#include <math.h>
#include <stdio.h>

int main() {
  double x;
  printf("Enter a positive number: ");
  scanf("%lf", &x);

  double guess = 1.0f;
  double new_guess = (guess + x / guess) / 2;
  while (fabs(new_guess - guess) > 0.00001) {
    guess = new_guess;
    new_guess = (guess + x / guess) / 2;
  }

  printf("Square root: %f\n", new_guess);
}
