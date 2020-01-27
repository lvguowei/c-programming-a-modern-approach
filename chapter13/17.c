#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 100

bool palindrome(const char *message);

int main() {
  char message[SIZE + 1];
  char *p = message;

  printf("Enter a message: ");
  char c;
  while ((c = getchar()) != '\n' && p < &message[SIZE]) {
    c = tolower(c);
    if (c >= 'a' && c <= 'z') {
      *p++ = c;
    }
  }

  *p = '\0';

  if (palindrome(message)) {
    printf("Palindrome\n");
  } else {
    printf("Not a palindrome\n");
  }
}


bool palindrome(const char *message) {
  const char *head = message;
  const char *tail = message;
  while (*tail) {
    tail++;
  }
  tail--;
  while (head < tail) {
    if (*head++ != *tail--) {
      return false;
    }
  }
  return true;
}
