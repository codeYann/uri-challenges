#include <stdio.h>

int main() {
  int n, square,count = 2;
  scanf("%d", &n);

  while (n--) {
      if(count % 2 == 0) {
        square = (count * count);
        printf("%d^2 = %d\n", count, square);
      }
      count++;
  }
  return 0;
}