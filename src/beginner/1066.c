#include <stdio.h>

const int size = 5; 

int main(void) {
    int list[size], odd = 0, even = 0, negative = 0, positive = 0;

    for(int i = 0; i < size; i++) 
        scanf("%d", &list[i]);
    
    for(int i = 0; i < size; i++) {
        if(list[i] < 0 && list[i] % 2 == 0) {
            negative++;
            even++;
        } else if(list[i] > 0 && list[i] % 2 == 0) {
            positive++;
            even++;
        } else if(list[i] < 0 && list[i] % 2 != 0) {
            negative++;
            odd++;
        } else if(list[i] > 0 && list[i] % 2 != 0) {
            positive++;
            odd++;
        } else {
            even++;
        }
    }

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positive);
    printf("%d valor(es) negativo(s)\n", negative);
    return 0;
} 