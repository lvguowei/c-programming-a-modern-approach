#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 100

bool palindrome(char message[], int len) {
  for (int head = 0, tail = len - 1; head < tail; head++, tail--) {
    if (message[head] != message[tail]) {
      return false;
    }
  }
  return true;
}


int main() {
  char message[SIZE];

  printf("Enter a message: ");
  char c;
  int counter = 0;
  while ((c = getchar()) != '\n') {
    c = tolower(c);
    if (c >= 'a' && c <= 'z') {
      message[counter++] = c;
    }
  }

  if (palindrome(message, counter)) {
    printf("Palindrome\n");
  } else {
    printf("Not a palindrome\n");
  }
}
