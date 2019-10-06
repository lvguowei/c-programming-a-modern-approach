#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SENTENCE_MAX_LEN 100

int compute_vowel_count(const char *sentence);

int main() {
  printf("Enter a sentence: ");
  char sentence[SENTENCE_MAX_LEN];
  gets(sentence);
  printf("Your sentence contains %d vowels.\n", compute_vowel_count(sentence));
}

int compute_vowel_count(const char *sentence) {
  int count = 0;
  for (int i = 0; sentence[i] != '\0'; i++) {
    char c = tolower(sentence[i]);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
      count++;
    }
  }
  return count;
}
