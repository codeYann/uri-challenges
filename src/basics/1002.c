#include <stdio.h>
#define N 3.14159;
  
int main(void) {
    double area, r;
    scanf("%lf", &r);

    area = r * r * N;
    printf("A= %.4lf\n", area);
    
    return 0;
}