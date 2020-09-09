#include <stdio.h>

int main(void) {
  int times;
  while (1) {
    scanf("%d", &times);
    if(times == 0) break;

    for(int i = 1; i < times; i++)
      printf("%d ", i);

    printf("%d\n", times);
  }
  return 0;
}