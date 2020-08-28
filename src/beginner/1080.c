#include <stdio.h>
#define size 100

int main(void) {
  int array[size], largest, position = 0;

  for(int i = 0; i < size; i++) {
      scanf("%d", &array[i]);
  }
 
  largest = array[0];
  
  for(int i = 0; i < size; i++) {
      if(array[i] > largest) {
          largest = array[i];
          position = i + 1;
      }
  }

  printf("%d\n", largest);
  printf("%d\n", position);
  return 0;
}
