#include <stdio.h>

int main() {
  int MAX = 100;
  int d[MAX];
  int n = 0;

  for ( int i = 0; i < MAX; i++) {
    scanf(" %d", &d[i]);
    n++;
    if (getchar() == '\n') {
      break;
    }
  }

  for (int i = 0; i < n; i++) {
    printf("%d", d[i]);
  }
  printf("\n");
}
