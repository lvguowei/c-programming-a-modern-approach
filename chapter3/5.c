#include <stdio.h>

int main() {
  int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16;
  printf("Enter the numbers from 1 to 16 in any order: ");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16);
  printf("%2d %2d %2d %2d\n", a1, a2, a3, a4);
  printf("%2d %2d %2d %2d\n", a5, a6, a7, a8);
  printf("%2d %2d %2d %2d\n", a9, a10, a11, a12);
  printf("%2d %2d %2d %2d\n", a13, a14, a15, a16);

  int rowSum1 = a1 + a2 + a3 + a4;
  int rowSum2 = a5 + a6 + a7 + a8;
  int rowSum3 = a9 + a10 + a11 + a12;
  int rowSum4 = a13 + a14 + a15 + a16;

  int colSum1 = a1 + a5 + a9 + a13;
  int colSum2 = a2 + a6 + a10 + a14;
  int colSum3 = a3 + a7 + a11 + a15;
  int colSum4 = a4 + a8 + a12 + a16;

  int diagSum1 = a1 + a6 + a11 + a16;
  int diagSum2 = a4 + a7 + a10 + a13;

  printf("Row sums: %d %d %d %d\n", rowSum1, rowSum2, rowSum3, rowSum4);
  printf("Column sums: %d %d %d %d\n", colSum1, colSum2, colSum3, colSum4);
  printf("Diagonal sums: %d %d\n", diagSum1, diagSum2);
}
