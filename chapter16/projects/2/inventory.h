#ifndef INVENTORY_H
#define INVENTORY_H

#define NAME_LEN 25
#define MAX_PARTS 100

struct part
{
  int number;
  char name[NAME_LEN];
  int on_hand;
};

#endif
