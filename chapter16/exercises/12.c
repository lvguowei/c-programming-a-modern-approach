#include <stdio.h>

union test_union {
  double a; // 8
  struct {
    char b[4]; // 4
    double c; // 8
    int d; // 4
  } e; // 16
  char f[4]; // 4
} u; // 16

int main(int argc, char *argv[])
{
  printf("%d\n", sizeof(union test_union));
  return 0;
}
