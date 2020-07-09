#include <stdio.h>
 
int main(void) {
    int code_product1, units_product1, code_product2, units_product2;
    float price_product1, price_product2, amount;

    scanf("%d %d %f", &code_product1, &units_product1, &price_product1);
    scanf("%d %d %f", &code_product2, &units_product2, &price_product2);

    amount = units_product1 * price_product1 + units_product2 * price_product2;
    printf("VALOR A PAGAR: R$ %.2f\n", amount);

    return 0;
}