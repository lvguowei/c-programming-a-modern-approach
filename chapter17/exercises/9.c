#include <stdio.h>

struct test {
  int a;
};



int main(int argc, char *argv[])
{
  struct test x;
  x.a = 3;
  printf("%d", (&x)->a);
  return 0;
}
