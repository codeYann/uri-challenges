#include <stdio.h>

int main(void) {
    int employee_number, worked_hours;
    float amount, salary;

    scanf("%i", &employee_number);
    scanf("%i", &worked_hours);
    scanf("%f", &amount);

    salary = amount * worked_hours;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", employee_number, salary);

    return 0;
}