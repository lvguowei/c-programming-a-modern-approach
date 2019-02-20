#include<stdio.h>

int main() {
  float amount;
  printf("Enter an amount: ");
  scanf("%f", &amount);
  float result = amount * 1.05;
  printf("With tax added: $%.2f", result);
}
