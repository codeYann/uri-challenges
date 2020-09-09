#include <stdio.h>
 
int main(void) {
    int k, n, smallest, biggest, count = 0;
    scanf("%d %d", &k, &n);
    
    smallest = k < n ? k : n;
    biggest = k > n ? k : n;
    
    for(int i = smallest + 1; i < biggest; i++) {
        if(i % 2 == 1 || i % 2 == -1) {
            count += i;
        }
    }

    printf("%d\n", count);
    return 0;
}