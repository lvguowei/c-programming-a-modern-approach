#include <stdio.h>

struct fraction
{
  int numerator;
  int denominator;
};

struct fraction reduce_fraction(struct fraction f) {
  int temp;
  int n = f.numerator, d = f.denominator;

  // find the GCD
  while (n % d != 0) {
    temp = d;
    d = n % d;
    n = temp;
  }
  f.numerator /= d;
  f.denominator /= d;
  return f;
};

struct fraction add_fraction(struct fraction f1, struct fraction f2) {
  // a/b + c/d = (ad + bc) / bd

  int a = f1.numerator;
  int b = f1.denominator;
  int c = f2.numerator;
  int d = f2.denominator;

  struct fraction r = {a * d + b * c, b * d};
  return reduce_fraction(r);
}

struct fraction subtract_fraction(struct fraction f1, struct fraction f2) {
  // a/b + c/d = (ad - bc) / bd

  int a = f1.numerator;
  int b = f1.denominator;
  int c = f2.numerator;
  int d = f2.denominator;

  struct fraction r = {a * d - b * c, b * d};
  return reduce_fraction(r);
}

struct fraction multiply_fraction(struct fraction f1, struct fraction f2) {
  // a/b * c/d = a*c / b*d

  int a = f1.numerator;
  int b = f1.denominator;
  int c = f2.numerator;
  int d = f2.denominator;

  struct fraction r = {a * c, b * d};
  return reduce_fraction(r);
}

struct fraction divide_fraction(struct fraction f1, struct fraction f2) {
  // a/b / c/d = a/b * d/c = a*d / b*c

  int a = f1.numerator;
  int b = f1.denominator;
  int c = f2.numerator;
  int d = f2.denominator;

  struct fraction r = {a * d, b * c};
  return reduce_fraction(r);
}


void print_fraction(struct fraction f) {
  printf("%d / %d\n", f.numerator, f.denominator);
}

int main(int argc, char *argv[])
{
  struct fraction f = {4, 6};
  f = reduce_fraction(f);
  print_fraction(f);

  struct fraction f1 = {2, 3};
  struct fraction f2 = {1, 3};
  print_fraction(add_fraction(f1, f2));

  print_fraction(subtract_fraction(f1, f2));
  print_fraction(multiply_fraction(f1, f2));
  print_fraction(divide_fraction(f1, f2));
  return 0;

}
