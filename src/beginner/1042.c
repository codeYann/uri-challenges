#include <stdio.h>

const int size = 3;

int main(void) {
  
  int list[size], originalList[size], temp = 0;

  for(int i = 0; i < size; i++) {
    scanf("%d", &list[i]);
    originalList[i] = list[i];
  }
  

  for(int i = 0; i < size; i++) 
    for(int j = i + 1; j < size; j++) {
        if(list[i] > list[j]) {
          temp = list[i];
          list[i] = list[j];
          list[j] = temp;

        }
    }
  
  for(int i = 0; i < size; i++) {
    printf("%d\n", list[i]);
  }
  printf("\n");
  for(int k = 0; k < size; k++) {
    printf("%d\n", originalList[k]);
  }

  return 0;
}
