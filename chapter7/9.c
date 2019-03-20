#include <stdio.h>
#include <ctype.h>

int main() {
  int hour, minute;
  char c;

  printf("Enter a 12-hour time: ");
  scanf("%d : %d %c", &hour, &minute, &c);

  hour = (hour == 12) ? 0 : hour;
  c = toupper(c);
  if (c == 'P') {
    hour += 12;
  }

  printf("Equivalent 24-hour time: %d:%d\n", hour, minute);

}
