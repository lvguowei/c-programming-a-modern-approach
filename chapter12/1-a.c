#include <stdio.h>

#define SIZE 100

int main() {

  char message[SIZE];
  int counter = 0;
  char c;

  printf("Enter a message: ");

  while ((c = getchar()) != '\n' && counter < SIZE) {
    message[counter] = c;
    counter++;
  }

  int i;
  for (i = counter - 1; i >= 0; i--) {
    putchar(message[i]);
  }
}
