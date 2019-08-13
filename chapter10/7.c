#include <stdio.h>

#define MAX_DIGITS 10

const int segments[10][7] = {
                             {1, 1, 1, 1, 1, 1, 0}, // 0
                             {0, 1, 1, 0, 0, 0, 0}, // 1
                             {1, 1, 0, 1, 1, 0, 1}, // 2
                             {1, 1, 1, 1, 0, 0, 1}, // 3
                             {0, 1, 1, 0, 0, 1, 1}, // 4
                             {1, 0, 1, 1, 0, 1, 1}, // 5
                             {1, 0, 1, 1, 1, 1, 1}, // 6
                             {1, 1, 1, 0, 0, 0, 0}, // 7
                             {1, 1, 1, 1, 1, 1, 1}, // 8
                             {1, 1, 1, 1, 0, 1, 1}  // 9
};

char digits[4][4 * MAX_DIGITS];

void clear_digits_array();
void process_digit(int digit, int position);
void print_digits_array();


int main() {
  clear_digits_array();

  printf("Enter a number: ");

  char c;
  int i = 0;
  while ((c = getchar()) != '\n') {
    if (c >= '0' && c <= '9') {
      int n = c - '0';
      process_digit(n, i);
      i++;
    }
  }
  print_digits_array();
}

void process_digit(int digit, int position) {
  int x = position * 4;
  // set slot 0
  if (segments[digit][0] == 1) {
    digits[0][x + 1] = '_';
  }

  // set slot 1
  if (segments[digit][1] == 1) {
    digits[1][x + 2] = '|';
  }

  // set slot 2
  if (segments[digit][2] == 1) {
    digits[2][x + 2] = '|';
  }

  // set slot 3
  if (segments[digit][3] == 1) {
    digits[3][x + 1] = '-';
  }

  // set slot 4
  if (segments[digit][4] == 1) {
    digits[2][x] = '|';
  }

  // set slot 5
  if (segments[digit][5] == 1) {
    digits[1][x] = '|';
  }

  // set slot 6
  if (segments[digit][6] == 1) {
    digits[1][x + 1] = '_';
  }
}

void clear_digits_array() {
  int i, j;
  for (i = 0; i < 4; i++) {
    for (j = 0; j < MAX_DIGITS * 4; j++) {
      digits[i][j] = ' ';
    }
  }
}

void print_digits_array() {
  int i, j;
  for (i = 0; i < 4; i++) {
    for (j = 0; j < MAX_DIGITS * 4; j++) {
      printf("%c", digits[i][j]);
    }
    printf("\n");
  }
}
