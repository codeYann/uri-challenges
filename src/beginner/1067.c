#include <stdio.h>

int main(void) {
  int x, count = 1;
  scanf("%d", &x);

  while (x--) {
      if(count % 2 != 0) {
          printf("%d\n", count);
      }
      count++;
  }

  return 0;
}