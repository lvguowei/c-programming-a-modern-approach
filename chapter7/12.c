#include <stdio.h>

int main() {
  float result;
  printf("Enter an expression: ");
  scanf("%f", &result);

  char ch;
  float temp;
  while ((ch = getchar()) != '\n') {
    switch (ch) {
    case '+': {
      scanf("%f", &temp);
      result += temp;
      break;
    }
    case '-': {
      scanf("%f", &temp);
      result -= temp;
      break;
    }
    case '*': {
      scanf("%f", &temp);
      result *= temp;
      break;
    }
    case '/': {
      scanf("%f", &temp);
      result /= temp;
      break;
    }
    default:
      break;
    }
  }

  printf("Value of expression: %.1f \n", result);
}
