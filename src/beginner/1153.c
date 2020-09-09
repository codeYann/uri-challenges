#include <stdio.h>

int fatorial(int k) {
  int count = 1;
  if (k <= 1)
      return k;
  for (int i = 1; i <= k; i++)
    count *= i;
  return count;
}

int main(void) {
  int k, fat;
  scanf("%d", &k);

  fat = fatorial(k);
  printf("%d\n", fat);

  return 0;
}