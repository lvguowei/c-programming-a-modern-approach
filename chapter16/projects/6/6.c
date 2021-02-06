#include <stdio.h>

struct date
{
  int year;
  int month;
  int day;
};

int compare_dates(struct date d1, struct date d2) {
  if (d1.year > d2.year) {
    return 1;
  } else if (d1.year < d2.year) {
    return -1;
  } else {
    if (d1.month > d2.month) {
      return 1;
    } else if (d1.month < d2.month) {
      return -1;
    } else {
      if (d1.day > d2.day) {
        return 1;
      } else if (d1.day < d2.day) {
        return -1;
      } else {
        return 0;
      }
    }
  }
}

int main() {
  struct date d1, d2;

  printf("Enter first date (mm/dd/yy): ");
  scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);

  printf("Enter second date (mm/dd/yy): ");
  scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);


  int result = compare_dates(d1, d2);
  if (result == 1) {
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d",
           d2.month, d2.day, d2.year, d1.month, d1.day, d1.year);
  } else if (result == -1) {
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d",
           d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
  } else {
    printf("They are equal\n");
  }

  printf("\n");

  return 0;
}

