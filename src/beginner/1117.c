#include <stdio.h>
 
int main(void) {
    double k, n;
    scanf("%lf",&k);
    
    while(k < 0 || k > 10) {
        printf("nota invalida\n");
        scanf("%lf",&k);
    }
    scanf("%lf",&n);
    while(n < 0 || n > 10) {
        printf("nota invalida\n");
        scanf("%lf",&n);
    } 
    
    double media = (k + n) / 2;
    printf("media = %.2lf\n", media);

    return 0;
}