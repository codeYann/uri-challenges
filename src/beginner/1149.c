#include <stdio.h>

int main(void) {
    int A, N, count = 0;
    scanf("%d %d", &A, &N); 
    while(N <= 0) {
        scanf("%d", &N);
    }

    for(int i = 1; i <= N; i++) {
        count += A;
        A++;
    }

    printf("%d\n", count);
    return 0;
}