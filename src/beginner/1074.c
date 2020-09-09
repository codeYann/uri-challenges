#include <stdio.h>
 
int main(void) {
    int N, count;
    scanf("%d", &N);

    while(N--) {
        scanf("%d", &count);
        if(count == 0) {
            printf("NULL\n");
        } else if(count > 0 && count % 2 == 0) {
            printf("EVEN POSITIVE\n");
        } else if(count < 0 && count % 2 == 0) {
            printf("EVEN NEGATIVE\n");
        } else if(count > 0 && count % 2 != 0) {
            printf("ODD POSITIVE\n");
        } else {
            printf("ODD NEGATIVE\n");
        }
    }

 
    return 0;
}