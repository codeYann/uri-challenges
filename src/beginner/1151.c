#include <stdio.h>

int main(void) {
    int n, x, y = 1, z = 1;
    scanf("%d", &n);

    if(n == 0) {
        printf("0\n");
        return 0;
    }

    printf("0");
    for(int i = 1; i < n; i++) {
        printf(" %d", y);
        x = y;
        y = z;
        z = x + y;
    }
    printf("\n");

    return 0;
}