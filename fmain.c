#include <functions.h>
#include <stdio.h>

int main(void) {
  
  printf("%d\n",length(cons(32, cons(42, cons(233, EMPTY)))));
  
  return 0;
}