#include <stdio.h>

void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);

int round_row(int next, int n);
int round_col(int next, int n);

int main() {
  int n;
  printf("Enter size of magic number: ");
  scanf("%d", &n);
  int grid[n][n];

  create_magic_square(n, grid);
  print_magic_square(n, grid);
}

void create_magic_square(int n, int magic_square[n][n]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      magic_square[i][j] = 0;
    }
  }

  int row = 0, col = n / 2;
  for (int i = 1; i <= n * n; i++) {
    int current_row = row;
    int current_col = col;

    magic_square[current_row][current_col] = i;

    row = round_row(row - 1, n);
    col = round_col(col + 1, n);

    if (magic_square[row][col] != 0) {
      row = round_row(current_row + 1, n);
      col = current_col;
    }
  }
}

void print_magic_square(int n, int magic_square[n][n]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%5d ", magic_square[i][j]);
    }
    printf("\n");
  }
}

int round_row(int next, int n) {
  if (next == -1) {
    return n - 1;
  } else if (next == n) {
    return 0;
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
