#include <stdio.h>

struct complex
{
  double real, imaginary;
};


struct complex make_complex(double real, double imaginary)
{
  struct complex c = {real, imaginary};
  return c;
}

struct complex add_complex(struct complex c1, struct complex c2)
{
  struct complex result;
  result.real = c1.real + c2.real;
  result.imaginary = c1.imaginary + c2.imaginary;
  return result;
}

void print_complex(struct complex c)
{
  printf("real=%f, imaginary=%f\n", c.real, c.imaginary);
}

int main() {
  struct complex c1, c2, c3;

  c1 = make_complex(0.0, 1.0);
  c2 = make_complex(1.0, 0.0);
  c3 = add_complex(c1, c2);
  print_complex(c3);
}
