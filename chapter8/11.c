#include <stdio.h>

int main() {
  char phone_numbers[15];
  printf("Enter phone number: ");

  for (int i = 0; (phone_numbers[i] = getchar()) != '\n'; i++)
    ;

  printf("In numeric form: ");

  char ch;
  for (int i = 0; (ch = phone_numbers[i]) != '\n'; i++) {
    char ch = phone_numbers[i];
    if (ch >= 'A' && ch <= 'C') {
      putchar('2');
    } else if (ch >= 'D' && ch <= 'F') {
      putchar('3');
    } else if (ch >= 'G' && ch <= 'I') {
      putchar('4');
    } else if (ch >= 'J' && ch <= 'L') {
      putchar('5');
    } else if (ch >= 'M' && ch <= 'O') {
      putchar('6');
    } else if (ch >= 'P' && ch <= 'S') {
      if (ch == 'Q') {
        putchar(ch);
      } else {
        putchar('7');
      }
    } else if (ch >= 'T' && ch <= 'V') {
      putchar('8');
    } else if (ch >= 'W' && ch <= 'Y') {
      putchar('3');
    } else {
      putchar(ch);
    }
  }
  printf("\n");
}
