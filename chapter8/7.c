#include <stdio.h>

#define NUM_ROWS 5
#define NUM_COLS 5

int main() {
  int data[NUM_ROWS][NUM_COLS] = {{0}};
  int i, j;
  for(i = 0; i < NUM_ROWS; i++) {
    printf("Enter row %d: ", i + 1);
    for(j = 0; j < NUM_COLS; j++) {
      scanf("%d", &data[i][j]);
    }
  }

  printf("Row totals: ");
  for(i = 0; i < NUM_ROWS; i++) {
    int sum = 0;
    for(j = 0; j < NUM_COLS; j++) {
      sum += data[i][j];
    }
    printf(" %d", sum);
  }
  printf("\n");

  printf("Column totals: ");
  for(i = 0; i < NUM_COLS; i++) {
    int sum = 0;
    for(j = 0; j < NUM_ROWS; j++) {
      sum += data[j][i];
    }
    printf(" %d", sum);
  }
}
