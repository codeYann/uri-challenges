#include <stdio.h>

#define size 10

signed int main(void) {
    int list[size];
    
    for(int i = 0; i < size; i++) {
        scanf("%d", &list[i]);
    }

    for(int i = 0; i < size; i++) {
        if(list[i] <= 0) {
            list[i] = 1;
        }
    }

    for(int k = 0; k < size; k++) {
        printf("X[%d] = %d\n", k, list[k]);
    }
    return 0;
}