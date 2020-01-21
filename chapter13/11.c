#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_SENTENCE_LEN 100

double compute_average_word_length(const char *sentence);

int main() {
  printf("Enter a sentence: ");
  char sentence[MAX_SENTENCE_LEN];
  fgets(sentence, MAX_SENTENCE_LEN, stdin);
  printf("Average word length: %.1f\n", compute_average_word_length(sentence));
}

double compute_average_word_length(const char *sentence) {
  char ch;
  int words = 0;
  int characters = 0;
  bool isPreviouslySpace = true;

  int n = 0;
  while (sentence[n] != '\0' && sentence[n] != '\n') {
    if (sentence[n] != ' ') {
      characters++;
      if (isPreviouslySpace) {
        words++;
        isPreviouslySpace = false;
      }
    } else {
      isPreviouslySpace = true;
    }
    n++;
  }

  return (double) characters / words;
}
