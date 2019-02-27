#include <stdio.h>

int main() {
  int num_grade;
  printf("Enter numerical grade: ");
  scanf("%d", &num_grade);

  if (num_grade > 100 || num_grade < 0) {
    printf("Error\n");
    return 1;
  }

  switch (num_grade / 10) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    printf("Letter grade: F\n");
    break;
  case 6:
    printf("Letter grade: D\n");
    break;
  case 7:
    printf("Letter grade: C\n");
    break;
  case 8:
    printf("Letter grade: B\n");
    break;
  case 9:
  case 10:
    printf("Letter grade: A\n");
    break;
  }

  return 0;
}
