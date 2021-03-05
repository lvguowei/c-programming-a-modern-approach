#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

int count_occurrences(struct node *list, int n);

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

  printf("occure %d times\n", count_occurrences(node1, 3));
}

int count_occurrences(struct node *list, int n) {
  int count = 0;
  while (list != NULL) {
    if (list->value == n) {
      count++;
    }
    list = list->next;
  }
  return count;
}
