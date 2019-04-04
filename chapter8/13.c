#include <stdio.h>
#include <ctype.h>

int main() {
  char lastname[20];
  int size = 0;

  printf("Enter a first and last name: ");

  char ch, initial;
  while ((ch = getchar()) == ' ')
    ;
  initial = toupper(ch);

  while ((ch = getchar()) != ' ')
    ;

  while ((ch = getchar()) != ' ' && ch != '\n') {
    lastname[size] = ch;
    size++;
  }

  printf("You entered the name: ");
  for (int i = 0; i < size; i++) {
    putchar(lastname[i]);
  }
  putchar(',');
  putchar(' ');
  putchar(initial);
  putchar('.');
  putchar('\n');
}
