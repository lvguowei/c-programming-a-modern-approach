#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node* next;
};

struct node *insert_into_ordered_list(struct node *list, struct node *new_node) {
  struct node *cur = list, *prev = NULL;

  while (cur != NULL && cur->value <= new_node->value) {
    prev = cur;
    cur = cur->next;
  }

  if (prev == NULL) {
    new_node->next = cur;
    return new_node;
  }

  prev->next = new_node;
  new_node->next = cur;
  return list;
}

void print_node_list(struct node *list) {
  while (list != NULL) {
    printf("%d ", list->value);
    list = list->next;
  }
}

int main(int argc, char *argv[]) {
  struct node *n1 = malloc(sizeof(struct node));
  struct node *n2 = malloc(sizeof(struct node));
  struct node *n3 = malloc(sizeof(struct node));

  n1->value = 1;
  n2->value = 3;
  n3->value = 5;

  n1->next = n2;
  n2->next = n3;
  n3->next = NULL;

  struct node *new_node = malloc(sizeof(struct node));
  new_node->value = 4;
  new_node->next = NULL;
  
  struct node* result = insert_into_ordered_list(n1, new_node);
  print_node_list(result);

  return 0;
}
