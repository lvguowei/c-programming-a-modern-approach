#include <stdio.h>

typedef struct
{
  double real, imaginary;
} Complex;


Complex make_complex(double real, double imaginary)
{
  Complex c = {real, imaginary};
  return c;
}

Complex add_complex(Complex c1, Complex c2)
{
  Complex result;
  result.real = c1.real + c2.real;
  result.imaginary = c1.imaginary + c2.imaginary;
  return result;
}

void print_complex(Complex c)
{
  printf("real=%f, imaginary=%f\n", c.real, c.imaginary);
}

int main() {
  Complex c1, c2, c3;

  c1 = make_complex(0.0, 1.0);
  c2 = make_complex(1.0, 0.0);
  c3 = add_complex(c1, c2);
  print_complex(c3);
}
