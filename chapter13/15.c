#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


#define STACK_SIZE 100
#define MAX_LEN 100



int stack[STACK_SIZE];
int top = 0;

char expression[MAX_LEN + 1];

void push(int c);
int pop();
bool is_full();
bool is_empty();

int evaluate_RPN_expression(const char *expression);

int main() {
  while (true) {
    printf("Enter an RPN expression: ");

    char ch;
    int i = 0;
    while ((ch = getchar()) != '\n') {
      if (ch == ' ') continue;

      if (i < MAX_LEN) {
        expression[i] = ch;
        i++;
      } else {
        break;
      }
    }

    expression[i] = '\0';
    printf("Value of expression: %d\n", evaluate_RPN_expression(expression));
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


int evaluate_RPN_expression(const char *expression) {
  while (*expression != '=') {
    if (isdigit(*expression)) {
      push(*expression - '0');
    } else {
      switch (*expression) {
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
    expression++;
  }

  return pop();
}
