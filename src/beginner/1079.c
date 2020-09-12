#include <stdio.h>

int main(void) {
    
    int N;
    double k, i, j, media;
    
    scanf("%d", &N);

    while(N--) {
        scanf("%lf %lf %lf", &k, &i, &j);
        media = ((k * 2) + (i * 3) + (j * 5)) / (2 + 3 + 5);
        printf("%.1lf\n", media);
    }

    return 0;
}
