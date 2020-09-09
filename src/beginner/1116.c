#include <stdio.h>

int main(void) {
  int x, y, times;
  double result;
  scanf("%d", &times);

  while(times--) {
    scanf("%d %d", &x, &y);
    if(y == 0) {
      printf("divisao impossivel\n");
    } else {
      result = x / (double) y;
      printf("%.1lf\n", result);
    }
  }
  return 0;
}