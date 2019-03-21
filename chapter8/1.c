#include <stdio.h>
#include <stdbool.h>


int main() {
  int digit_count[10] = {0};
  int digit;
  long n;
  bool hasRepeated = false;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    digit_count[digit]++;
    if (digit_count[digit] > 1) {
      hasRepeated = true;
    }
    n /= 10;
  }

  if (hasRepeated) {
    printf("Repeated digits: ");
    for (int i = 0; i < 10; i++) {
      if (digit_count[i] > 1) {
        printf("%d ", i);
      }
    }
    printf("\n");
  } else {
    printf("No repeated digit\n");
  }
}
