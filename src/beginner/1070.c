#include <stdio.h>
 
int main(void) {
    
    int k, rep = 0;
    scanf("%d", &k);

    while(1) {
        if(k % 2 != 0) {
            printf("%d\n", k);
            rep++;
        }
        k++;
        if(rep == 6) break;
    }
 
    return 0;
}