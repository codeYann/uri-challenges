#include <stdio.h>

const int size = 6;

float media(float lista[], int size) {
  float som = 0;
  for(int i = 0; i < size; i++)
      som += lista[i];
  return som;
}

int main(void) {
  float values[size], average[size], result = 0;
  int count = 0;

  for(int i = 0; i < size; i++)
      scanf("%f", &values[i]);

  for(int i = 0; i < size; i++) {
      if(values[i] > 0) {
          average[count] = values[i];
          count++;
      }
  }

  result = (media(average, count) / count);

  printf("%d valores positivos\n", count);
  printf("%.1f\n", result);

  return 0;
}