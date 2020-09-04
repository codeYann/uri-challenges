#include <stdio.h>
const int size = 5;

int evenNumbers(int list[], int size) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(list[i] % 2 == 0)
          count++;
    }
    return count;
}
int main(void) {
    int list[size], even = 0;
    for(int i = 0; i < size; i++)
        scanf("%d", &list[i]);

    even = evenNumbers(list, size);
    printf("%d valores pares\n", even);
}