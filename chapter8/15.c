#include <stdio.h>

int main() {
  char message[80];
  char ch;
  int n = 0;
  int shift;
  printf("Enter message to be encrypted: ");
  while ((ch = getchar()) != '\n') {
    message[n] = ch;
    n++;
  }

  printf("Enter shift amount (1-25): ");
  scanf("%d", &shift);

  printf("Encrypted message: ");

  for (int i = 0; i < n; i++) {
    if ((message[i] >= 'a' && message[i] <= 'z')) {
      putchar((message[i] - 'a' + shift) % 26 + 'a');
    } else if ((message[i] >= 'A' && message[i] <= 'Z')) {
      putchar((message[i] - 'A' + shift) % 26 + 'A');
    } else {
      putchar(message[i]);
    }
  }
  printf("\n");
}
