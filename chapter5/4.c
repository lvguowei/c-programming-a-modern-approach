#include <stdio.h>

int main() {
  int speed;

  printf("Enter wind speed in knots: ");
  scanf("%d", &speed);

  if (speed < 1) {
    printf("Calm\n");
  } else if (speed <= 3) {
    printf("Light air\n");
  } else if (speed <= 27) {
    printf("Breeze\n");
  } else if (speed <= 47) {
    printf("Gale\n");
  } else if (speed <= 63) {
    printf("Storm\n");
  } else if (speed > 63) {
    printf("Hurricane\n");
  }
}
