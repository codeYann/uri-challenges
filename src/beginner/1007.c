#include <stdio.h>

int main(void) {
    int a, b, c, d, diff;
    scanf("%i %i %i %i", &a, &b, &c, &d);
    
    diff = ((a * b ) - (c * d));
    
    printf("DIFERENCA = %d\n", diff);
    return 0;
}