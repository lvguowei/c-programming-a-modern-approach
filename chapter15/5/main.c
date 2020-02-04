#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include "stack.h"


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

