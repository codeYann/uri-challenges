#include <stdio.h>
void cordinates() {
    float x, y;
    scanf("%f %f", &x, &y);
    while(x != 0 || y != 0) {
        if(x == 0 || y == 0) {
            break;
        }
        if(x > 0 && y > 0) {
            printf("primeiro\n");
        } else if(x < 0 && y > 0) {
            printf("segundo\n");
        } else if(x  < 0 && y < 0) {
            printf("terceiro\n");
        } else {
            printf("quarto\n");
        }
        scanf("%f %f", &x, &y);
    }
}
int main(void) {
    cordinates();
    return 0;
}