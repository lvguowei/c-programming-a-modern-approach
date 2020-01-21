#include <stdio.h>

#define MAX_WORDS 30
#define MAX_WORD_LEN 20

int main() {
  char words[MAX_WORDS][MAX_WORD_LEN + 1];
  char ch;
  char terminator;
  printf("Enter a sentence: ");

  int i = 0;
  int j = 0;
  while ((ch = getchar()) != '\n') {
    if (ch == '.' || ch == '!' || ch == '?') {
      terminator = ch;
      words[i][j] = '\0';
      break;
    }
    if(ch != ' ' && ch != '\t') {
      words[i][j] = ch;
      j++;
    } else {
      words[i][j] = '\0';
      i++;
      j = 0;
    }
  }

  for(int n = i; n > 0; n--) {
    printf("%s ", words[n]);
  }
  printf("%s%c\n", words[0], terminator);
}
