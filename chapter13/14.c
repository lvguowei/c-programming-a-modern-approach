#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

#define MAX_LEN 5

bool are_anagrams(const char *word1, const char *word2);

int main() {
  char word1[MAX_LEN + 1];
  char word2[MAX_LEN + 1];

  char c;
  char *p = word1;

  printf("Enter first word: ");
  while ((c = getchar()) != '\n' && p < word1 + MAX_LEN) {
    if (isalpha(c)) {
      *p = tolower(c);
      p++;
    }
  }

  *p = '\0';

  p = word2;

  printf("Enter second word: ");
  while ((c = getchar()) != '\n' && p < word2 + MAX_LEN) {
    if (isalpha(c)) {
      *p = tolower(c);
      p++;
    }
  }
  *p = '\0';

  if (are_anagrams(word1, word2)) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
}

bool are_anagrams(const char *word1, const char *word2) {
  printf("%s\n", word1);
  printf("%s\n", word2);

  int letters[26] = {0};
  int *p = letters;

  while (*word1) {
    letters[*word1 - 'a'] += 1;
    word1++;
  }

  while (*word2) {
    letters[*word2 - 'a'] -= 1;
    word2++;
  }


  for (p = letters; p < letters + 26; p++) {
    if (*p != 0) return false;
  }
  return true;
}
