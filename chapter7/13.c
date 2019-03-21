#include <stdio.h>
#include <stdbool.h>

int main() {
  printf("Enter a sentence: ");

  char ch;
  int words = 0;
  int characters = 0;
  bool isPreviouslySpace = true;

  while ((ch = getchar()) != '\n') {
    if (ch != ' ') {
      characters++;
      if (isPreviouslySpace) {
        words++;
        isPreviouslySpace = false;
      }
    } else {
      isPreviouslySpace = true;
    }
  }

  printf("%d %d\n", words, characters);
  printf("Average word length: %.1f\n", (float) characters / words);
}
