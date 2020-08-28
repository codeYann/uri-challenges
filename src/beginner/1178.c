#include <stdio.h>
#define size 100

signed int main(void) {
    double lista[size], k;
    scanf("%lf", &k);

    lista[0] = k;

    for(int i = 1; i <= size; i++) {
        lista[i] = lista[i - 1] / (double) 2;
    }

    for(int i = 0; i < size; i++) {
        printf("N[%d] = %.4lf\n", i,lista[i]);
    }

    return 0;
}
