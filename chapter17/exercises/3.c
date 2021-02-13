#include <stdio.h>
#include <stdlib.h>

int *create_array(int n, int initial_value) {
  int *temp = malloc(sizeof(int) * n);
  if (temp == NULL) {
    return NULL;
  }

  int *p;

  for (p = temp; p < temp + n; p++) {
    *p = initial_value;
  }
  return temp;
}

int main(int argc, char *argv[]) {
  int *p = create_array(10, 3);
  for (int i = 0; i < 10; i++) {
    printf("%d ", *(p + i));
  }
  return 0;
}
