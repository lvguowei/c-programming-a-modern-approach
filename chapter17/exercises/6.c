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
  struct node *p = list;

  if (p->value == n) {
    list = list->next;
    free(p);
    return list;
  }
  
  for (; p->next != NULL && p->next->value != n; p = p->next)
    ;

  if (p->next == NULL) {
    return list;
  }

  struct node *temp = p->next;
  p->next = p->next->next;
  free(temp);
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
