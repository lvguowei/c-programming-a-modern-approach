#include <stdio.h>
#include <string.h>

#define MAX_LEN 20

int main() {
  char str[MAX_LEN + 1];
  char smallest[MAX_LEN + 1];
  char largest[MAX_LEN + 1];

  printf("Enter word: ");
  scanf("%s", str);
  strcpy(smallest, str);
  strcpy(largest, str);

  while (1) {
    printf("Enter word: ");
    scanf("%s", str);
    if (strlen(str) == 4) {
      break;
    }
    if (strcmp(str, smallest) < 0) {
      strcpy(smallest, str);
    } else if (strcmp(str, largest) > 0) {
      strcpy(largest, str);
    }
  }

  printf("Smallest word: %s\n", smallest);
  printf("Largest word: %s\n", largest);
}
