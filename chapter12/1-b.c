#include <stdio.h>

#define SIZE 10

int main() {

  char message[SIZE];
  char *p = message;
  char c;

  printf("Enter a message: ");

  while ((c = getchar()) != '\n' && p < &message[SIZE]) {
    *p = c;
    p++;
  }

  for (p--; p >= message; p--) {
    putchar(*p);
  }
}
