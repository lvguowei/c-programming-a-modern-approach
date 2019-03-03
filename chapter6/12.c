#include <stdio.h>

int main() {
  float e = 1;
  float diff;

  printf("Enter small number: ");
  scanf("%f", &diff);

  for (int i = 1;;i++) {
    int fact = 1;
    for (int j = 1; j <= i; j++) {
      fact *= j;
    }
    float new_e = e + (1.0f / fact);
    if (new_e - e <= diff) {
      break;
    } else {
      e = new_e;
    }
  }
  printf("%f\n", e);
}
