#include <stdio.h>

int main(void){
    int N, k, p, count = 0, biggest, lowest;

    scanf("%d", &N);

    while (N--) {
        scanf("%d %d", &k, &p);

        biggest = k > p ? k : p;
        lowest = k < p ? k : p;

        for (int i = lowest + 1; i < biggest; i++) {
            if (i % 2 != 0)
                count += i;
        }
        printf("%d\n", count);
        count = 0;
    }

    return 0;
}