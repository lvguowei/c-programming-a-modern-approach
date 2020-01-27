#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

char *MONTHS[] = {"January",
                  "February",
                  "March",
                  "April",
                  "May",
                  "June",
                  "July",
                  "August",
                  "September",
                  "October",
                  "November",
                  "December" };

int main() {
  int mm, dd, yyyy;

  printf("Enter a date (mm/dd/yyyy): ");

  scanf("%d/%d/%d", &mm, &dd, &yyyy);

  printf("You entered the date %s %d, %d\n", MONTHS[mm - 1], dd, yyyy);

  return 0;
}
