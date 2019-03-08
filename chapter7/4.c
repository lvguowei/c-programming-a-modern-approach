#include <stdio.h>

int main() {
  char ch;
  printf("Enter phone number: ");
  while ((ch = getchar()) != '\n') {
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
}
