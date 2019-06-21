#include <stdio.h>

int round_row(int next, int n);
int round_col(int next, int n);

int main() {
  int n = 99;
  printf("Enter size of magic number: ");
  scanf("%d", &n);
  int grid[99][99] = {0};

  int row = 0, col = n / 2;
  for (int i = 1; i <= n * n; i++) {
    int current_row = row;
    int current_col = col;

    grid[current_row][current_col] = i;

    row = round_row(row - 1, n);
    col = round_col(col + 1, n);

    if (grid[row][col] != 0) {
      row = round_row(current_row + 1, n);
      col = current_col;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%5d ", grid[i][j]);
    }
    printf("\n");
  }
}


int round_row(int next, int n) {
  if (next == -1) {
    return n - 1;
  } else {
    return next;
  }
}

int round_col(int next, int n) {
  if (next == n) {
    return 0;
  } else {
    return next;
  }
}
