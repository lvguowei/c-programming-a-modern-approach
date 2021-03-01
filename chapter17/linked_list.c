#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

struct node *add_to_list(struct node *list, int n) {
  struct node *new_node;

  new_node = malloc(sizeof(struct node));
  if (new_node == NULL) {
    printf("Error: malloc failed in add_to_list\n");
    exit(EXIT_FAILURE);
  }
  new_node->value = n;
  new_node->next = list;
  return new_node;
}

struct node *read_numbers(void) {
  struct node *first = NULL;
  int n;

  printf("Enter a series of integers (0 to terminate); ");
  for (;;) {
    scanf("%d", &n);
    if (n == 0) {
      return first;
    }
    first = add_to_list(first, n);
  }
}

struct node *search_list(struct node *list, int n) {
  while (list != NULL && list->value != n) {
    list = list->next;
  }
  return list;
}

struct node *delete_from_list(struct node *list, int n) {
  struct node *cur, *prev;
  for (cur = list, prev = NULL; cur != NULL && cur->value != n; prev = cur, cur = cur->next)
    ;
  
  // n not found
  if (cur == NULL) {
    return list;
  }

  if (prev == NULL) {
    list = list->next;
  } else {
    prev->next = cur->next;
  }
  free(cur);
  return list;
}

int main(int argc, char *argv[]) {
  struct node *first = read_numbers();
  struct node *p = delete_from_list(first, 3);
  while (p != NULL) {
    printf("%d ", p->value);
    p = p->next;
  }
  return 0;
}
