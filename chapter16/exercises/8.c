#include <stdio.h>

struct color
{
  int red;
  int green;
  int blue;
};

const struct color MAGENTA = {255, 0 , 255};
const struct color MAGENTA2 = {.red = 255, .blue = 255};

int main(int argc, char *argv[])
{
  printf("%d %d %d\n", MAGENTA.red, MAGENTA.green, MAGENTA.blue);
  printf("%d %d %d\n", MAGENTA2.red, MAGENTA2.green, MAGENTA2.blue);
  return 0;
}
