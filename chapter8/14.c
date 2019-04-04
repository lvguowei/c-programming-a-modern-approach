#include <stdio.h>
#include <stdbool.h>

int main() {
  char sentence[100];
  char ch;
  char terminator;
  int n = 0;
  int end;
  printf("Enter a sentence: ");

  while (true) {
    ch = getchar();
    if (ch == '.' || ch == '?' || ch == '!') {
      terminator = ch;
      break;
    }
    sentence[n] = ch;
    n++;
  }

  end = n;
  for (int i = n - 1; i >= 0; i--) {
    if (sentence[i] == ' ') {
      for (int j = i + 1; j < end; j++) {
        putchar(sentence[j]);
      }
      putchar(' ');
      end = i;
    } else if (i == 0) {
      for (int j = i; j < end; j++) {
        putchar(sentence[j]);
      }
    } else {
      continue;
    }
  }

  putchar(terminator);
}
