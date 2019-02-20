#include<stdio.h>

int main() {
  int amount;
  printf("Enter a dollar amount: ");
  scanf("%d", &amount);

  int twenties = 0;
  int tens = 0;
  int fives = 0;
  int ones = 0;

  int remaining = amount;

  twenties = remaining / 20;
  remaining = remaining % 20;
  tens = remaining / 10;
  remaining = remaining % 10;
  fives = remaining / 5;
  remaining = remaining % 5;
  ones = remaining;

  printf("$20 dollar bills: %d\n", twenties);
  printf("$10 dollar bills: %d\n", tens);
  printf(" $5 dollar bills: %d\n", fives);
  printf(" $1 dollar bills: %d\n", ones);
}
