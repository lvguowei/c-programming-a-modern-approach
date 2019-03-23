#include <stdio.h>
#include <ctype.h>

#define MAX 100

int main() {
  char message[MAX];

  printf("Enter message: ");
  char ch;
  int message_len = 0, i;
  while ((ch = getchar()) != '\n' && message_len < MAX) {
    message[message_len++] = ch;
  }

  for (i = 0; i < message_len; i++) {
    char c = toupper(message[i]);
    switch (c) {
    case 'A': {
      putchar('4');
      break;
    }
    case 'B': {
      putchar('8');
      break;
    }
    case 'E': {
      putchar('3');
      break;
    }
    case 'I': {
      putchar('1');
      break;
    }
    case 'O': {
      putchar('0');
      break;
    }
    case 'S': {
      putchar('5');
      break;
    }
    default:
      putchar(c);
      break;
    }
  }
  printf("!!!!!!!!!!!!\n");
}
