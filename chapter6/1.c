#include <stdio.h>

int main() {
  float input, max = 0;
  for(;;) {
    printf("Enter a number: ");
    scanf("%f", &input);

    if (input <= 0) {
      break;
    }

    if (input > max) {
      max = input;
    }
  }
  printf("The largest number entered was: %.2f\n", max);
}
