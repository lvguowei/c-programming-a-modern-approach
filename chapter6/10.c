#include <stdio.h>

int main() {

  int mm_min = 0, dd_min = 0, yy_min = 0;

  printf("Enter a date (mm/dd/yy): ");
  scanf("%d/%d/%d", &mm_min, &dd_min, &yy_min);

  for (;;) {
    int mm, dd, yy;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm, &dd, &yy);

    if (mm == 0 && dd == 0 && yy == 0) {
      break;
    }

    if (yy < yy_min || (yy == yy_min && mm < mm_min) || (yy == yy_min && mm == mm_min && dd < dd_min)) {
      mm_min = mm;
      dd_min = dd;
      yy_min = yy;
    }
  }
  printf("%.2d/%.2d/%.2d is the earlest date.\n", mm_min, dd_min, yy_min);
}
