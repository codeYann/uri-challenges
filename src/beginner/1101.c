#include <stdio.h>
 
int main(void) {
    int k, n, smallest, biggest, sum = 0;

    
    while(1) {
        scanf("%d %d", &k, &n);
        if(n <= 0 || k <= 0) {
            break;
        }
        
        sum = 0;
        
        smallest = k < n ? k : n; 
        biggest = k > n ? k : n;

        for(int i = smallest; i <= biggest; i++) {
            sum += i;
            printf("%d ", i);
        }
        printf("Sum=%d\n", sum);
    }   


 
    return 0;
} 