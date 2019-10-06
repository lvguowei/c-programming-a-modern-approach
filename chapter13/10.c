#include <stdio.h>
#include <ctype.h>

#define MAX 100

void reverse_name(char *name);

int main() {
  char input[MAX];

  printf("Enter a first and last name: ");
  fgets(input, MAX, stdin);
  reverse_name(input);
}

void reverse_name(char *name) {
  char initial;
  while (*name == ' ') {
    name++;
  }
  initial = *name;

  while (*name != ' ') {
    name++;
  }

  while (*name == ' ') {
    name++;
  }

  while (*name != ' ' && *name != '\n') {
    putchar(*name++);
  }
  printf(", %c\n", initial);
}
