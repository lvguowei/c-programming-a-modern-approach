#include <stdio.h>
#include <stdlib.h>

#define MIN_PER_HOUR 60

int main(void) {

  struct Schedule
  {
    int departure;
    int arrival;
  };

  struct Schedule schedules[] = {
    {8 * MIN_PER_HOUR + 0, 10 * MIN_PER_HOUR + 16},
    {9 * MIN_PER_HOUR + 43, 11 * MIN_PER_HOUR + 52},
    {11 * MIN_PER_HOUR + 19, 1 * MIN_PER_HOUR + 31},
    {12 * MIN_PER_HOUR + 47, 3 * MIN_PER_HOUR + 0},
    {14 * MIN_PER_HOUR + 0, 16 * MIN_PER_HOUR + 8},
    {15 * MIN_PER_HOUR + 45, 17 * MIN_PER_HOUR + 55},
    {19 * MIN_PER_HOUR + 0, 21 * MIN_PER_HOUR + 20},
    {21 * MIN_PER_HOUR + 45, 23 * MIN_PER_HOUR + 58}
  };

  int user_time, hour, minute;

  printf("Enter a 24-hour time: ");
  scanf("%d :%d", &hour, &minute);
  user_time = hour * 60 + minute;

  printf("Closest departure time is ");

  int i;
  for (i = 0; i < 6; i++) {
    if (user_time <= schedules[i].departure + (schedules[i + 1].departure - schedules[i].departure) / 2) {
      printf("%d:%d\n", schedules[i].departure / 60, schedules[i].departure % 60);
      return 0;
    }
  }
  i++;
  printf("%d:%d\n", schedules[i].departure / 60, schedules[i].departure % 60);
  return 0;
}
