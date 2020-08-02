#include <stdio.h>

struct point {int x, y;};
struct rectangle {struct point upper_left, lower_right;};

int area(struct rectangle r);

struct point center(struct rectangle r);

void print_point(struct point p);

void print_rectangle(struct rectangle r);

struct rectangle move(struct rectangle, int dx, int dy);

bool inside(struct point p, struct rectangle r);


int main(int argc, char *argv[])
{

  struct point tl = (struct point) {10, 10};
  struct point br = (struct point) {40, 80};
  struct rectangle r = (struct rectangle) {tl, br};

  print_rectangle(r);

  printf("Area is %d\n", area(r));

  print_point(center(r));

  print_rectangle(move(r, 5, 7));

  return 0;
}

int area(struct rectangle r) {
  return (r.lower_right.x - r.upper_left.x) * (r.lower_right.y - r.upper_left.y);
}

struct point center(struct rectangle r) {
  int w = r.lower_right.x - r.upper_left.x;
  int h = r.lower_right.y - r.upper_left.y;
  return (struct point) {r.upper_left.x + w / 2, r.upper_left.y + h / 2};
}


void print_rectangle(struct rectangle r) {
  printf("(%d, %d) - (%d, %d)\n", r.upper_left.x, r.upper_left.y, r.lower_right.x, r.lower_right.y);
}

struct rectangle move(struct rectangle r, int dx, int dy) {
  struct point ul = r.upper_left;
  struct point lr = r.lower_right;
  return (struct rectangle) { (struct point) {ul.x + dx, ul.y + dy}, (struct point) {lr.x + dx, lr.y + dy}};
}

bool inside(struct point p, struct rectangle r) {
  return p.x >= r.upper_left.x && p.y >= r.upper_left.y && p.x <= r.lower_right.x && p.y <= r.lower_right.y;
}


void print_point(struct point p) {
  printf("(%d, %d)\n", p.x, p.y);
}
