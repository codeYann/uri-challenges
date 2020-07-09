#include <stdio.h>
 
int main(void) {
    char name[15];
    float salary_month, sold_items, total;

    scanf("%s", name);
    scanf("%f", &salary_month);
    scanf("%f", &sold_items);

    total = salary_month + (sold_items * ((float) 15 / 100));

    printf("TOTAL = R$ %.2f\n", total);
    return 0;
}