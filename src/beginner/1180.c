#include <stdio.h> 

signed int main(void) {
    int k;
    scanf("%d", &k);

    int lista[k], lowest, position = 0;
    
    for(int i = 0; i < k; i++) {
        scanf("%d", &lista[i]);
    }

    lowest = lista[0];

    for(int i = 0; i < k; i++) {
        if(lista[i] < lowest) {
            lowest = lista[i];
            position = i;
        }
    }

    printf("Menor valor: %d\n", lowest);
    printf("Posicao: %d\n", position);
    
}