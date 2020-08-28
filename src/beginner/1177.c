#include <stdio.h>
#define size 1000

int main(void) {
    int lista[size], k;
    scanf("%d", &k);

    for(int i = 0, count = 0; i < size; i++) {
        lista[i] = count;
        count++;
        if(count == k) 
            count = 0;
    }

    for(int i = 0; i < size; i++) {
        printf("N[%d] = %d\n", i, lista[i]);
    }
    return 0;
}