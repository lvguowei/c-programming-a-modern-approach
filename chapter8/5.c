#include <stdio.h>

#define FIB_SIZE 40

int main() {
  int fib_numbers[FIB_SIZE] = {0, 1};
  int i;
  for (i = 2; i < FIB_SIZE; i++) {
    fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
  }

  for (i = 0; i < FIB_SIZE; i++) {
    printf("%d\n", fib_numbers[i]);
  }
}
