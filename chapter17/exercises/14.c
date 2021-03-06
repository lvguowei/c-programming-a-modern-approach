#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};  

void delete_from_list(struct node **list, int n) {
  struct node *cur, *prev;

  for (cur = *list, prev = NULL; cur != NULL && cur->value != n; prev = cur, cur = cur->next)
    ;

  if (cur == NULL) {
    return;
  }

  if (prev == NULL) {
    *list = (*list)->next;
  } else {
    prev->next = cur->next;
  }
  free(cur);
}

void print_list(struct node *list) {
  while(list != NULL) {
    printf("%d ", list->value);
    list = list->next;
  }
}


int main(int argc, char *argv[]) {
  struct node *n1 = malloc(sizeof(struct node));
  struct node *n2 = malloc(sizeof(struct node));
  struct node *n3 = malloc(sizeof(struct node));

  n1->value = 1;
  n2->value = 2;
  n3->value = 3;

  n1->next = n2;
  n2->next = n3;
  n3->next = NULL;

  struct node **p = &n1;
  delete_from_list(p, 1);
  print_list(n1);

  return 0;
}
