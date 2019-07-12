#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>


#define STACK_SIZE 100

int stack[STACK_SIZE];
int top = 0;

void push(int c);
int pop();
bool is_full();
bool is_empty();

int main() {
  bool running = true;

  while (running) {
    printf("Enter an RPN expression: ");
    char ch;
    scanf(" %c", &ch);
    while (ch != '=') {
      if (isdigit(ch)) {
        push(ch - '0');
      } else {
        switch (ch) {
        case '+': {
          push(pop() + pop());
          break;
        }
        case '-': {
          char c1 = pop();
          char c2 = pop();
          push(c2 - c1);
          break;
        }
        case '*': {
          push(pop() * pop());
          break;
        }
        case '/': {
          char c1 = pop();
          char c2 = pop();
          push(c2 / c1);
          break;
        }
        default:
          exit(EXIT_FAILURE);
          break;
        }
      }
      scanf(" %c", &ch);
    }
    printf("Value of expression: %d\n", pop());
  }
}

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
