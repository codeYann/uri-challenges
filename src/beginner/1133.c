#include <stdio.h>

int main(void) {
  int k, n, lowest = 0, biggest = 0;
  scanf("%d %d", &k, &n);

  lowest = k < n ? k : n;
  biggest = k > n ? k : n;

  for(int i = lowest + 1; i < biggest; i++) {
      if((i % 5 == 2)) {
        printf("%d\n", i);
      } else if((i % 5 == 3)) {
        printf("%d\n", i);
      }
  }

  return 0;
}