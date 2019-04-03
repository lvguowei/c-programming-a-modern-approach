#include <stdio.h>
#include <ctype.h>

int main() {
  int scrabble[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
  char ch;
  int score = 0;
  int index;
  printf("Enter a word: ");
  while ((ch = getchar()) != '\n') {
    ch = toupper(ch);
    index = ch - 'A';
    score += scrabble[index];
  }
  printf("Scrabble value: %d\n", score);
}
