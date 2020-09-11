#include <stdio.h>

int main(void) {
    int options[2];
    for(int i = 0; i < 2; i++) 
        scanf("%d", &options[i]);
 
    float prices[] = {0, 4.00, 4.50, 5.00, 2.00, 1.50}, total;

    total = prices[options[0]] * options[1],
    printf("Total: R$ %.2f\n", total);
    return 0;
}