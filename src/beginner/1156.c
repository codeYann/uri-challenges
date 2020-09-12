#include <stdio.h>
 
int main(void) {

    double s = 1;
    long int num = 3, dem = 2;

    s += (num / (double) dem);

    while(1) {
        num += 2;
        dem *= 2;
        s += (num / (double) dem);
        if(num == 39) {
            break;
        } 
    }

    printf("%.2lf\n", s);


    return 0;
}