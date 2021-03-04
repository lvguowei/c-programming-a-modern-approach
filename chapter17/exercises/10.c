#include <stdio.h>
#include <string.h>

typedef struct {
  int number;
  char name[10];
  int on_hand;
} Part;

void print_part(const Part *part) {
  printf("Part number %d\n", part->number);
  printf("Part name %s\n",part->name);
  printf("Quantity on hand %d\n", part->on_hand);
}

int main(int argc, char *argv[])
{
  Part part;
  part.number = 1;
  strncpy(part.name, "Guowei", 10);
  part.on_hand = 10;

  print_part(&part);
  
  return 0;
}
