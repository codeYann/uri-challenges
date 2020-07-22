#include <stdio.h>
 
int main() {
    double list[6];
    int counter = 0;

    for(int i = 0; i <= 5; i++) {
        scanf("%lf", &list[i]);
        if(list[i] >= 0) {
            counter += 1;
        }
    }
    
    printf("%d valores positivos\n", counter);
    return 0;
}