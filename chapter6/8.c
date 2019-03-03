#include <stdio.h>

int main() {
  int days, start_day;
  printf("Enter number of days in month: ");
  scanf("%d", &days);
  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &start_day);

  int i;
  for (i = 1; i < start_day; i++) {
    printf("   ");
  }

  for (i = 1; i <= days; i++) {
    printf("%3d", i);
    if ((i + start_day - 1) % 7 == 0) {
      printf("\n");
    }
  }
}
