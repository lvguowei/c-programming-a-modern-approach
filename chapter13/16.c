#include <stdio.h>

#define SIZE 10

void reverse(char* message);

int main() {
  char message[SIZE + 1];
  char *p = message;
  char c;

  printf("Enter a message: ");

  while ((c = getchar()) != '\n' && p < &message[SIZE]) {
    *p = c;
    p++;
  }
  *p = '\0';

  reverse(message);

  printf("%s\n", message);

}

void reverse(char* message) {
  char *p1 = message;
  char *p2 = message;

  while (*p2 != '\0') {
    p2++;
  }
  p2--;

  while (p1 < p2) {
    char temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    p1++;
    p2--;
  }
}
