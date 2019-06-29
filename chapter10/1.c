#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 100

bool is_stack_underflow = false;
char contents[STACK_SIZE];
int top = 0;

void make_empty();
bool is_empty();
bool is_full();
void push(char c);
char pop();
void stack_overflow();
void stack_underflow();


int main() {
  char c;
  printf("Enter parentheses and/or braces: ");
  for(;;) {
    c = getchar();
    if ( c == '(' || c == '{') {
      push(c);
    } else if ( c == ')' || c == '}') {
      char popped = pop();
      if (is_stack_underflow) {
        printf("Not matched!\n");
        break;
      } else {
        if ((c == ')' && popped == '(') || (c == '}' && popped == '{')) {
          continue;
        } else {
          printf("Not matched!\n");
          break;
        }
      }
    } else if (c == '\n') {
      if (is_empty()) {
        printf("Matched!\n");
      } else {
        printf("Not matched!\n");
      }
      break;
    }
  }
}

void make_empty() {
  top = 0;
}

bool is_empty() {
  return top == 0;
}

bool is_full() {
  return top == STACK_SIZE;
}

void push(char c) {
  if (is_full()) {
    stack_overflow();
  } else {
    contents[top++] = c;
  }
}

char pop() {
  if (is_empty()) {
    stack_underflow();
  } else {
    return contents[--top];
  }
}

void stack_overflow() {
  printf("Stack overflow!\n");
  exit(EXIT_FAILURE);
}

void stack_underflow() {
  is_stack_underflow = true;
}
