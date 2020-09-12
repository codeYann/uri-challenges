#include <stdio.h>
 
int main(void) {
    double s = 0;

    for(int i = 1; i <= 100; i++) {
        s += (1 / (double) i);
    }
    printf("%.2lf\n", s);

    return 0;
}