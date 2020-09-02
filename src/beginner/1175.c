#include <stdio.h>
#define size 20

int main(void) {
    int list[size], invertedList[size], count = 19;

    for(int i = 0; i < size; i++)
        scanf("%d", &list[i]);

    for(int j = 0; j < size; j++) {
        invertedList[j] = list[count];
        count--;
    }

    for(int i = 0; i < size; i++)
        printf("N[%d] = %d\n", i,invertedList[i]);
    return 0;
}