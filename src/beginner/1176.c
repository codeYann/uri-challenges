#include <stdio.h>

const int size = 61;

int main(void) {    
    long long int fib[size], x = 0, y = 1, z = 0;
    int k, count;
    scanf("%d", &k);
    
            
    fib[0] = 0;
    
    for(int i = 1; i < size; i++)  {
        x = y;
        y = z; 
        z = x + y;
        fib[i] = z;
    }

    while(k--) {
        scanf("%d", &count);
        printf("Fib(%d) = %lld\n", count,fib[count]);
    }

    return 0;
}