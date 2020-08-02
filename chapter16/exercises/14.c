#include <stdio.h>

#define RECTANGLE 0
#define CIRCLE 1

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

double area(struct shape s)
{
  if (s.shape_kind == RECTANGLE) {
    return s.u.rectangle.height * s.u.rectangle.width;
  } else {
    return 3.14159 * s.u.circle.radius * s.u.circle.radius;
  }
}

struct shape move(struct shape s, int dx, int dy) {
  struct shape result = s;
  result.center.x += dx;
  result.center.y += dy;
  return result;
}

struct shape scale(struct shape s, double c)
{
  struct shape new_shape = s;

  if (new_shape.shape_kind == RECTANGLE) {
    new_shape.u.rectangle.height *= c;
    new_shape.u.rectangle.width *= c;
  } else
    new_shape.u.circle.radius *= c;

  return new_shape;
}

int main(int argc, char *argv[])
{
  struct shape s;
  s.shape_kind = RECTANGLE;
  s.u.rectangle.height = 1;
  s.u.rectangle.width = 2;

  printf("%f\n", area(s));
  return 0;
}
