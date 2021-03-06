#include <stdio.h>
#include <stdlib.h>

int sum(int (*f) (int), int start, int end);

int g(int n);

int main() {
  printf("%d", sum(g, 1, 3));
  return 0;  
}

int g(int n) {
  return 2 * n;
}

int sum(int (*f)(int), int start, int end) {
  int i;
  int result = 0;
  for (i = start; i <= end; i++) {
    result += f(i);
  }
  return result;
}
