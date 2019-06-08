#include <stdio.h>
#include <ctype.h>

int main() {
  int first_word[26] = {0};
  int second_word[26] = {0};
  char ch;

  printf("Enter first word: ");
  while ((ch = getchar()) != '\n') {
    if (!isalpha(ch)) {
      continue;
    } else {
      first_word[tolower(ch) - 'a'] += 1;
    }
  }

  printf("Enter second word: ");
  while ((ch = getchar()) != '\n') {
    if (!isalpha(ch)) {
      continue;
    } else {
      second_word[tolower(ch) - 'a'] += 1;
    }
  }


  for (int i = 0; i < 26; i++) {
    if (first_word[i] != second_word[i]) {
      printf("The words are not anagrams.\n");
      return 0;
    }
  }
  printf("The words are anagrams.\n");
}
