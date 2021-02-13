#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicate(const char *s) {
  char *temp = malloc(strlen(s) + 1);
  if (temp == NULL) {
    return NULL;
  }

  strcpy(temp, s);
  return temp;
}

int main(int argc, char *argv[]) {
  char *s = "Hello";
  char *c = duplicate(s);
  printf("%s\n", c);
}
