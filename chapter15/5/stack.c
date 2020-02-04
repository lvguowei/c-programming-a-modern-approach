#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include "stack.h"


#define STACK_SIZE 100

int stack[STACK_SIZE];
int top = 0;


bool is_full() {
  return top == STACK_SIZE;
}

bool is_empty() {
  return top == 0;
}

void push(int n) {
  if (is_full()) {
    printf("Express too complex\n");
    exit(EXIT_FAILURE);
  } else {
    stack[top++] = n;
  }
}

int pop() {
  if (is_empty()) {
    printf("Not enough operands\n");
    exit(EXIT_FAILURE);
  } else {
    return stack[--top];
  }
}
