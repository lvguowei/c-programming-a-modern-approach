#include<stdio.h>

int main() {
  float loan, rate, payment;

  printf("Enter amount of loan: ");
  scanf("%f", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &rate);
  printf("Enter monthly payment: ");
  scanf("%f", &payment);

  float monthlyInterest = rate / 100 / 12;
  float balance1 = loan - payment + loan * monthlyInterest;
  float balance2 = balance1 - payment + balance1 * monthlyInterest;
  float balance3 = balance2 - payment + balance2 * monthlyInterest;

  printf("Balance remaining after first payment: $%.2f\n", balance1);
  printf("Balance remaining after second payment: $%.2f\n", balance2);
  printf("Balance remaining after third payment: $%.2f\n", balance3);
}
