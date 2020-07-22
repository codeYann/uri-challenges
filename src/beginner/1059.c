#include <stdio.h>
 
int main() {
    int range = 100, n = 1;
    while(n <= range) {
        n = n + 1;
        if(n % 2 == 0) {
            printf("%d\n", n);
        } else {
            continue;
        }
    }
 
    return 0;
}