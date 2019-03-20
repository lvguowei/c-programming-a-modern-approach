#include <stdio.h>
#include <ctype.h>

int main() {
  printf("Enter a sentence: ");
  char c;
  int count = 0;
  while ((c = tolower(getchar())) != '\n') {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
      count++;
    }
  }
  printf("Your sentence contains %d vowels.\n", count);

}
