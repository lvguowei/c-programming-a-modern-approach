#include<stdio.h>
#include<math.h>

int main() {
  float r;
  printf("Input radius: ");
  scanf("%f", &r);

  float v = (4.0f / 3.0f) * M_PI * r * r * r;
  printf("%f\n", v);
}
