#include <stdio.h>
#define size 100

signed int main(void) {
    double A[size];

    for(int i = 0; i < size; i++) {
        scanf("%lf", &A[i]);
    }

    for(int i = 0; i < size; i++) {
        if(A[i] <= (double) 10) {
            printf("A[%d] = %.1lf\n",i , A[i]);
        }
    }

    return 0;
}