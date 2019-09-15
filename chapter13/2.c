#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50 /* maximum number of reminders */
#define MSG_LEN 60    /* max length of reminder message */

#define DAY_LEN 2
#define MONTH_LEN 2
#define HOUR_LEN 2
#define SPACE_LEN 1
#define NULL_LEN 1
#define SLASH_LEN 1

int read_line(char str[], int n);

int main() {
  char reminders[MAX_REMIND][MONTH_LEN + SLASH_LEN + DAY_LEN + SPACE_LEN +
                             HOUR_LEN + SPACE_LEN + MSG_LEN + NULL_LEN];
  char month_day_str[MONTH_LEN + SLASH_LEN + DAY_LEN + NULL_LEN],
      hour_str[HOUR_LEN + NULL_LEN],
      month_day_hour_str[MONTH_LEN + SLASH_LEN + DAY_LEN + SPACE_LEN +
                         HOUR_LEN + NULL_LEN],
      msg_str[MSG_LEN + NULL_LEN];
  int day, month, hour, i, j, num_remind = 0;

  for (;;) {
    if (num_remind == MAX_REMIND) {
      printf("-- No space left -- \n");
      break;
    }

    printf("Enter month/day, hour and reminder: ");

    // Read month/day
    scanf("%2d/%2d", &month, &day);
    if (day < 0 || day > 31 || month < 0 || month > 12) {
      printf("Month day out of range\n");
      continue;
    }

    if (month == 0 && day == 0) {
      break;
    }

    sprintf(month_day_str, "%2d/%2d", month, day);

    // Read hour
    scanf("%2d", &hour);
    if (hour < 0 || day > 24) {
      printf("Hour out of range\n");
      continue;
    }

    sprintf(hour_str, "%2d", hour);

    // Generate month/day hour string
    strcpy(month_day_hour_str, month_day_str);
    strcat(month_day_hour_str, " ");
    strcat(month_day_hour_str, hour_str);

    // Read message
    read_line(msg_str, MSG_LEN);

    for (i = 0; i < num_remind; i++) {
      if (strcmp(month_day_hour_str, reminders[i]) < 0) {
        break;
      }
    }

    for (j = num_remind; j > i; j--) {
      strcpy(reminders[j], reminders[j - 1]);
    }

    strcpy(reminders[i], month_day_hour_str);
    strcat(reminders[i], " ");
    strcat(reminders[i], msg_str);

    num_remind++;
  }

  printf("\nDay Time Reminder\n");
  for (i = 0; i < num_remind; i++) {
    printf(" %s\n", reminders[i]);
  }
}

int read_line(char str[], int n) {
  int ch, i = 0;
  while ((ch = getchar()) != '\n') {
    if (i < n) {
      str[i++] = ch;
    }
  }
  str[i] = '\0';
  return i;
}
