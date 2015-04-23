#include <functions.h>

PAIR *cons(int first, PAIR *rest) {
  PAIR *p;
  
  p = malloc(sizeof(PAIR));
  
  p->first = first;
  p->rest = rest;
  
  return p;
}
int length(PAIR *lst) {
  //Base Case
  if(lst == EMPTY) {
    return 0;
  }
  //General Case
  else {
    return 1 + length(lst->rest);
  }
}