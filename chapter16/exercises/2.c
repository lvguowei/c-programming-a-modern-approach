#include <stdio.h>

int main() {
  struct {
    double real, imaginary;
  } c1 = {0.0, 1.0}, c2 = {1.0, 0.0}, c3;

  c1 = c2;
  printf("real=%f, imaginary=%f\n", c2.real, c2.imaginary);
  printf("real=%f, imaginary=%f\n", c1.real, c1.imaginary);

  c3.real = c1.real + c2.real;
  c3.imaginary = c1.imaginary + c2.imaginary;
  printf("real=%f, imaginary=%f\n", c3.real, c3.imaginary);
}
