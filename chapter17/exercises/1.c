#include <stdio.h>
#include <stdlib.h>

void *my_malloc(size_t n) {
  void *p = malloc(n);
  if (p == NULL) {
    printf("malloc failed\n");
    exit(EXIT_FAILURE);
  }
  return p;

}

int main(int argc, char *argv[])
{
  void *p = my_malloc(4);
  free(p);
  return 0;
}
