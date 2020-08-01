#include <stdio.h>
#include <stdbool.h>

struct color
{
  int red;
  int green;
  int blue;
};


struct color make_color(int red, int green, int blue);

int get_red(struct color color);

bool equal_color(struct color c1, struct color c2);

struct color brighter(struct color c);

struct color darker(struct color c);

void print_color(struct color c);

int main(int argc, char *argv[])
{
  struct color c = make_color(-1, 120, 256);
  print_color(c);

  printf("%s\n", equal_color((struct color) {1, 8, 3}, (struct color) {1, 2, 3}) ? "same color" : "different color");

  print_color(brighter((struct color) {255, 1, 20}));
  print_color(darker((struct color) {255, 1, 20}));

  return 0;
}

void print_color(struct color c) {
  printf("%d %d %d\n", c.red, c.green, c.blue);
}

int validate(int color) {
  if (color < 0) {
    return 0;
  }
  if (color > 255) {
    return 255;
  }
  return color;
}

struct color make_color(int red, int green, int blue) {
  return (struct color) {validate(red), validate(green), validate(blue)};
}

int get_red(struct color color) {
  return color.red;
}

bool equal_color(struct color c1, struct color c2) {
  return c1.red == c2.red && c1.green == c2.green && c1.blue == c2.blue;
}

struct color brighter(struct color color) {

  int r = color.red;
  int g = color.green;
  int b = color.blue;

  if (r == 0 &&  g == 0 && b == 0) {
    r = g = b = 3;
  }

  if (r < 3) {
    r = 3;
  }

  if (g < 3) {
    g = 3;
  }

  if (b < 3) {
    b = 3;
  }

  r /= 0.7;
  g /= 0.7;
  b /= 0.7;

  if (r > 255) {
    r = 255;
  }

  if (g > 255) {
    g = 255;
  }

  if (b > 255) {
    b = 255;
  }

  return (struct color) {r, g, b};
}

struct color darker(struct color color) {
  return (struct color) {color.red * 0.7, color.green * 0.7, color.blue * 0.7};
}
