#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 100

bool palindrome(char *head, char *tail) {
  while (head < tail) {
    if (*head++ != *tail--) {
      return false;
    }
  }
  return true;
}

int main() {
  char message[SIZE];
  char *p = message;

  printf("Enter a message: ");
  char c;
  while ((c = getchar()) != '\n') {
    c = tolower(c);
    if (c >= 'a' && c <= 'z') {
      *p++ = c;
    }
  }

  if (palindrome(message, p - 1)) {
    printf("Palindrome\n");
  } else {
    printf("Not a palindrome\n");
  }
}
