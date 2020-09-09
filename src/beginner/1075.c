#include <stdio.h>
 
int main(void) {
    
    int times = 10000;
    int number, count = 1;
    scanf("%d", &number);

    while(times--) {
        if(count % number == 2) {
            printf("%d\n", count);
        }
        count++;
    }

 
    return 0;
}
