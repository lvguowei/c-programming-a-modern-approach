#include <stdio.h>

int main() {
  float loan, rate, payment;
  int number_of_payments;

  printf("Enter amount of loan: ");
  scanf("%f", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &rate);
  printf("Enter monthly payment: ");
  scanf("%f", &payment);
  printf("Enter the number of payments: ");
  scanf("%d", &number_of_payments);

  float monthly_interest = rate / 100 / 12;

  float balance = loan;

  for (int i = 0; i < number_of_payments; i++) {
    balance = balance - payment + balance * monthly_interest;
    printf("Balance remaining after %d payments: %.2f\n", i + 1, balance);
  }
}
