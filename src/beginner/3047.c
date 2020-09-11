#include <stdio.h>
 
int main(void) {
    int m, a, b, c, ages[3], temp;
    scanf("%d %d %d", &m, &a, &b);

    c = m - a - b;
    ages[0] = a;
    ages[1] = b;
    ages[2] = c;

    for(int i = 0; i < 3; i++) {
        for(int j = i + 1; j < 3; j++) {
            if(ages[i] > ages[j]) {
                temp = ages[i];
                ages[i] = ages[j];
                ages[j] = temp;
            }
        }
    }
    
    printf("%d\n", ages[2]);
 
    return 0;
} 