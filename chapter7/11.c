#include <stdio.h>
#include <ctype.h>

int main() {
  printf("Enter a first and last name: ");

  char ch, initial;
  while ((ch = getchar()) == ' ')
    ;
  initial = toupper(ch);

  while ((ch = getchar()) != ' ')
    ;

  while ((ch = getchar()) != ' ' && ch != '\n') {
    putchar(ch);
  }
  putchar(',');
  putchar(' ');
  putchar(initial);
  putchar('.');
}
