#include <stdio.h>
#include <stdlib.h>

#define NUM 8

int main(void) {

    int user_time,
        hour,
        minute;

    int departure_times[NUM] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arriving_times[NUM] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    int i, min_diff = 1440, min_index = 0;

    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minute);
    user_time = hour * 60 + minute;

    for (i = 0; i < NUM; i++){
      int diff = abs(user_time - departure_times[i]);
      if (diff < min_diff) {
        min_diff = diff;
        min_index = i;
      }
    }

    printf("Closest departure time is %d:%d, arriving at %d:%d\n", departure_times[min_index] / 60, departure_times[min_index] % 60, arriving_times[min_index] / 60, arriving_times[min_index] % 60);
}
