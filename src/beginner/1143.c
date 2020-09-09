#include <stdio.h>

int main(void) {
  int k, count = 1;
  scanf("%d", &k);

  while (k--) {
    printf("%d ", count);
    printf("%d ", (count * count));
    printf("%d\n", (count * count * count));
    count++;
  }

  return 0;
}