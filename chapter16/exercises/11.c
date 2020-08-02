#include <stdio.h>

struct test_struct {
  double a; // 8
  union test_union {
    char b[4]; // 4
    double c; // 8
    int d; // 4
  } e; // 8
  char f[4]; // 4
} s; // 20

int main(int argc, char *argv[])
{
  printf("%d\n", sizeof(struct test_struct));
  printf("%d\n", sizeof(union test_union));
  printf("%d\n", sizeof(double));
  printf("%d\n", sizeof(char[4]));
  return 0;
}
