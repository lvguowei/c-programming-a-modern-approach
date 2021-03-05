#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

struct node *find_last(struct node *list, int n) {
  struct node *last = NULL;
  while (list != NULL) {
    if (list->value == n) {
      last = list;
    }
    list = list->next;
  }
  return last;
}

int main() {
  struct node *node1 = malloc(sizeof(struct node));
  struct node *node2 = malloc(sizeof(struct node));
  struct node *node3 = malloc(sizeof(struct node));
  struct node *node4 = malloc(sizeof(struct node));
  
  node1->value = 3;
  node2->value = 2;
  node3->value = 3;
  node4->value = 4;
  node1->next = node2;
  node2->next = node3;
  node3->next = node4;
  node4->next = NULL;

  struct node *last = find_last(node1, 3);

  if (last == NULL) {
    printf("Not found.\n");
  } else {
    printf("%d\n", last->value);
  }
}
