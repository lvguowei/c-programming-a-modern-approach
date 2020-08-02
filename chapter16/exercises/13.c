#include <stdio.h>
struct point {int x, y;};
struct shape {
  int shape_kind;
  struct point center;
  union {
    struct {
      int height, width;
    } rectangle;
    struct {
      int radius;
    } circle;
  } u;
} s;

int main(int argc, char *argv[])
{
  s.shape_kind = 1;
  s.center.x = 10;
  //s.height = 25;
  s.u.rectangle.width = 8;
  //s.u.circle = 5;
  //s.u.radius = 5;
  return 0;
}
