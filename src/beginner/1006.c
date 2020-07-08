#include <stdio.h>

int main(void) {
    float a, b, c, media;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
 
    media = (a * 2.0 + b * 3.0 + c * 5.0) / 10.0;
    printf("MEDIA = %.1f\n", media);
    return 0;
}