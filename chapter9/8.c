#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

int roll_dice();
bool play_game();

int main() {
  int wins = 0;
  int loses = 0;
  bool gameover = false;

  srand((unsigned) time(NULL));

  while (!gameover) {
    bool result = play_game();
    if (result) {
      wins++;
      printf("\nYou win!\n");
    } else {
      loses++;
      printf("\nYou lose!\n");
    }
    printf("Play again?");
    char play_again;
    scanf("%c", &play_again);
    if (play_again != 'y' && play_again != 'Y') {
      gameover = true;
    }

    if (gameover) {
      printf("Wins: %d  Loses: %d\n", wins, loses);
    }
  }
}

int roll_dice() {
  while (getchar() != '\n');
  int a = rand() % 6 + 1;
  int b = rand() % 6 + 1;
  return a + b;
}

bool play_game() {
  int first_result = roll_dice();
  printf("You rolled %d\n", first_result);
  if (first_result == 7 || first_result == 11) {
    return true;
  } else if (first_result == 2 || first_result == 3 || first_result == 12) {
    return false;
  } else {
    printf("Your point is %d", first_result);
    bool keep_rolling = true;
    bool result;
    while (keep_rolling) {
      int sum = roll_dice();
      printf("You rolled %d", sum);
      if (sum == 7) {
         result = false;
         keep_rolling = false;
      } else if (result == first_result) {
        result = true;
        keep_rolling = false;
      } else {
        continue;
      }
    }
    return result;
  }
}
