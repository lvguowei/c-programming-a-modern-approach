#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#include "line.h"

#define MAX_LINE_LEN 60

char line[MAX_LINE_LEN + 1];
int line_len = 0;
int num_words = 0;

void clear_line() {
  line[0] = '\0';
  line_len = 0;
  num_words = 0;
}

void add_word(const char *word) {
  if (num_words > 0) {
    line[line_len] = ' ';
    line[line_len + 1] = '\0';
    line_len++;
  }
  strcat(line, word);
  line_len += strlen(word);
  num_words++;
}

int space_remaining() {
  return MAX_LINE_LEN - line_len;
}

void write_line() {
  int i, j, common, remainder, extra_spaces, current_white_space;
  extra_spaces = MAX_LINE_LEN - line_len;
  common = extra_spaces / (num_words - 1);
  remainder = extra_spaces % (num_words - 1);
  current_white_space = 0;

  int first_space_index = 0;
  int last_space_index = num_words - 2;

  static bool flag = true;

  for (i = 0; i < line_len; i++) {
    if (line[i] != ' ') {
      putchar(line[i]);
    } else {
      for (j = 1; j <= common + 1; j++) {
        putchar(' ');
      }
      int index = flag ? first_space_index : last_space_index;
      if (abs(index - current_white_space) < remainder) {
        putchar(' ');
      }
      current_white_space++;
      num_words--;
    }
  }
  flag = !flag;
  putchar('\n');
}

void flush_line() {
  if (line_len > 0) {
    puts(line);
  }
}
