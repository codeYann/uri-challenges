#include <stdio.h>
 
int main(void) {
    double x, y, k;
    scanf("%lf %lf", &x, &y);

    k = x / y;
    printf("%.3lf km/l\n", k);
 
    return 0;
}