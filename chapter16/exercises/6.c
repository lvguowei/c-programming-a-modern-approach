#include <stdio.h>

struct time
{
  int hours, minutes, seconds;
};

struct time split_time(long total_seconds)
{
  int h = total_seconds / 3600;
  int m = (total_seconds % 3600) / 60;
  int s = total_seconds % 60;

  struct time result = {h, m, s};
  return result;
}

int main()
{
  struct time t = split_time(180);
  printf("%d, %d, %d", t.hours, t.minutes, t.seconds);
  return 0;
}
