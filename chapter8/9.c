#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define NUM_COL 10
#define NUM_ROW 10

int main() {
  int i, j, step, row = 0, col = 0;
  char letter = 'A';
  char grid[NUM_COL][NUM_ROW];

  srand((unsigned) time(NULL));

  for (i = 0; i < NUM_ROW; i++) {
    for (j = 0; j < NUM_COL; j++) {
      grid[i][j] = '.';
    }
  }

  for (step = 0; step < 26; step++ ) {
    int new_row, new_col;
    bool right_blocked = false, down_blocked = false, left_blocked = false, up_blocked = false;
    while (!(right_blocked && down_blocked && left_blocked && up_blocked)) {
      switch (rand() % 4) {
      case 0: {
        new_row = row;
        new_col = col + 1;
        if (new_row >= NUM_ROW || new_col >= NUM_COL || new_row < 0 || new_col < 0 || grid[new_row][new_col] != '.') {
          right_blocked = true;
          continue;
        }
        break;
      }
      case 1: {
        new_row = row + 1;
        new_col = col;
        if (new_row >= NUM_ROW || new_col >= NUM_COL || new_row < 0 || new_col < 0 || grid[new_row][new_col] != '.') {
          down_blocked = true;
          continue;
        }
        break;
      }
      case 2: {
        new_row = row;
        new_col = col - 1;
        if (new_row >= NUM_ROW || new_col >= NUM_COL || new_row < 0 || new_col < 0 || grid[new_row][new_col] != '.') {
          left_blocked = true;
          continue;
        }
        break;
      }
      case 3: {
        new_row = row - 1;
        new_col = col;
        if (new_row >= NUM_ROW || new_col >= NUM_COL || new_row < 0 || new_col < 0 || grid[new_row][new_col] != '.') {
          up_blocked = true;
          continue;
        }
        break;
      }
      }
      row = new_row;
      col = new_col;
      grid[row][col] = letter + step;
      break;
    }
  }


  for (i = 0; i < NUM_ROW; i++) {
    for (j = 0; j < NUM_COL; j++) {
      printf("%c ", grid[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}


