#include <ctype.h>
#include <stdio.h>

#define MAX_WORD_LEN 100
int compute_scrabble_value(const char *word);

int main() {
  char word[MAX_WORD_LEN];
  printf("Enter a word: ");
  scanf("%s", word);
  printf("Scrabble value: %d\n", compute_scrabble_value(word));
}

int compute_scrabble_value(const char *word) {
  int score = 0;
  char ch;
  for (int i = 0; word[i] != '\0'; i++) {
    ch = word[i];
    ch = toupper(ch);
    switch (ch) {
    case 'A':
    case 'E':
    case 'I':
    case 'L':
    case 'N':
    case 'O':
    case 'R':
    case 'S':
    case 'T':
    case 'U': {
      score += 1;
      break;
    }
    case 'D':
    case 'G': {
      score += 2;
      break;
    }
    case 'B':
    case 'C':
    case 'M':
    case 'P': {
      score += 3;
      break;
    }
    case 'F':
    case 'H':
    case 'V':
    case 'W':
    case 'Y': {
      score += 4;
      break;
    }
    case 'K': {
      score += 5;
      break;
    }
    case 'J':
    case 'X': {
      score += 8;
      break;
    }
    case 'Q':
    case 'Z': {
      score += 10;
      break;
    }
    }
  }
  return score;
}
