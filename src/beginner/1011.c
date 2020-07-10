#include <stdio.h>  
 
struct {
    int *list;

} node;

#define PI 3.14159;

int main(void) {
    double R, volume;
    scanf("%lf", &R);

    volume = (R * R * R) * (double) 4 / 3 * PI;
    printf("VOLUME = %.3lf\n", volume);

    return 0;   
}