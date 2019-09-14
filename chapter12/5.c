#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

int main() {
  char sentence[MAX_SIZE];
  char *p = sentence;

  char ch;
  char terminator;
  char *end;
  printf("Enter a sentence: ");

  while (true) {
    ch = getchar();
    if (ch == '.' || ch == '?' || ch == '!') {
      terminator = ch;
      break;
    }
    *p++ = ch;
  }

  end = p;
  for (char *p1 = p - 1; p1 >= sentence; p1--) {
    if (*p1 == ' ') {
      for (char *p2 = p1 + 1; p2 < end; p2++) {
        putchar(*p2);
      }
      putchar(' ');
      end = p1;
    } else if (p1 == sentence) {
      for (char *p2 = p1; p2 < end; p2++) {
        putchar(*p2);
      }
    } else {
      continue;
    }
  }

  putchar(terminator);
}
