#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

struct node *top = NULL;

void make_empty() {
  struct node *temp;

  while (top != NULL) {
    temp = top;
    top = top->next;
    free(temp);
  }
}

bool is_empty() {
  return top == NULL;
}

bool push(int i) {
  struct node *new_node;
  new_node = malloc(sizeof(struct node));
  if (new_node == NULL) {
    return false;
  }
  new_node->value = i;
  new_node->next = top;
  top = new_node;
  
  return true;
}

int pop() {
  struct node *temp;
  int i;

  if (is_empty()) {
    printf("***Stack underflow; program terminated. ***\n");
    exit(EXIT_FAILURE);
  }

  i = top->value;
  temp = top;
  top = top->next;
  free(temp);
}

int main(int argc, char *argv[])
{
  
  return 0;
}
