#include <stdio.h>
#include <math.h>

float distance(float px, float px2, float py, float py2) {
    float calc = ((px2 - px) * (px2 - px)) + ((py2 - py) * (py2 - py));
    float result = sqrt(calc);
    return result;
}
int main(void) {
    float px, px2, py, py2, distance_point;

    scanf("%f %f", &px, &py);
    scanf("%f %f,", &px2, &py2);

    distance_point = distance(px, px2, py, py2);

    printf("%.4f\n", distance_point);
    return 0;
}