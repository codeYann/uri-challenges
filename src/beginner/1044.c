#include <stdio.h>

int main(void) {
  int k, n;
  scanf("%d %d", &k, &n);

  if((k % n == 0 ) || (n % k == 0)) {
    printf("Sao Multiplos\n");
  } else if((k % n != 0) || (n % k != 0)) {
    printf("Nao sao Multiplos\n");
  }
  return 0;
}