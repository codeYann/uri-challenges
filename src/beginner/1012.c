#include <stdio.h>
const double PI = 3.14159;

double circle(double r) {
    return (PI * (r * r));
}

double rectangled_triangle(double base, double height) {
    return (base * height ) / (double) 2;
}

double trapezium(double minor_base, double major_base, double height) {
    return ((minor_base + major_base) * height) / (double) 2;
}

double square(double base) {
    return (base * base);
}

double rectangle(double base, double height) {
    return (base * height);
}

int main(int agrc, char* argv[]) {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double area_triangle =  rectangled_triangle(a, c);
    double area_trapezium = trapezium(a, b, c);
    double area_square = square(b);
    double area_rectangle = rectangle(a, b);
    double area_circle = circle(c);

    printf("TRIANGULO: %.3lf\n", area_triangle);
    printf("CIRCULO: %.3lf\n", area_circle);
    printf("TRAPEZIO: %.3lf\n", area_trapezium);
    printf("QUADRADO: %.3lf\n", area_square);
    printf("RETANGULO: %.3lf\n", area_rectangle);

    return 0;
}