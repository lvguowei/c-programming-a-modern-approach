#include <stdio.h>

struct date
{
  int year, month, day;
};
int day_of_year(struct date d)
{
  int res = 0, i;
  const int days_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (d.month > 1 && ((d.year % 4 == 0 && d.year % 100 != 0) 
                      || d.year % 400 == 0))
    res++;
  for (i = 0; i < d.month; i++)
    res += days_month[i];
  return res + d.day;
}


int compare_dates(struct date d1, struct date d2)
{
  int d1day = day_of_year(d1);
  int d2day = day_of_year(d2);
  if (d1day > d2day)
    return -1;
  else if (d1day < d2day)
    return 1;
  else
    return 0;
}


int main()
{
  return 0;
}
