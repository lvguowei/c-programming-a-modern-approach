#include <stdio.h>
#include <string.h>

#define MAX_LEN 80
void encrypt(char *message, int shift);


int main() {
  char message[MAX_LEN + 1];
  char ch;
  int shift;
  printf("Enter message to be encrypted: ");

  fgets(message, MAX_LEN + 1, stdin);


  printf("Enter shift amount (1-25): ");
  scanf("%d", &shift);

  printf("Encrypted message: ");

  encrypt(message, shift);
}

void encrypt(char *message, int shift) {
  while (*message) {
    if (*message == '\n') {
      putchar('\n');
      break;
    }
    if ((*message >= 'a' && *message <= 'z')) {
      putchar((*message - 'a' + shift) % 26 + 'a');
    } else if ((*message >= 'A' && *message <= 'Z')) {
      putchar((*message - 'A' + shift) % 26 + 'A');
    } else {
      putchar(*message);
    }
    message++;
  }
}
