#include <stdio.h>
 
int main(void) {
    int k, count = 1;
    scanf("%d", &k);

    while(count <= k) {
        if(k % count == 0) {
            printf("%d\n", count);
        }
        count++;
    }
 
    return 0;
}