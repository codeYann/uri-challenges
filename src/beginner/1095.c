#include <stdio.h>

int main(void) {
  int k = 1, n = 60, count = 12;
  printf("I=%d J=%d\n", k, n);

  while(count--) {
    k += 3;
    n -= 5;
    printf("I=%d J=%d\n", k, n);
  }

  return 0;
}