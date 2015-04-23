#define EMPTY NULL

#include <stdlib.h>

typedef struct pair {
  int first;
  struct pair *rest;
} PAIR;

PAIR *cons(int first, PAIR *rest);
int length(PAIR *lst);