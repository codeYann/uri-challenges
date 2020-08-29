#include <stdio.h>

#define row 12
#define col 12

signed int main(void) {
    double matriz[row][col], som = 0, media = 0;
    char caractere[2];

    scanf("%s", caractere);

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
           scanf("%lf", &matriz[i][j]);
        }
    }
    

    if(caractere[0] == 'S') {
        for(int i = 0; i < row; i++) {
            for(int j = col - 1; j > (col - 1) - i; j--) {
                som += matriz[i][j];
            }
        }
        printf("%.1lf\n", som);
    } else {
        for(int i = 0; i < row; i++) {
            for(int j = col - 1; j > (col - 1) - i; j--) {
                som += matriz[i][j];
            }
        }
        media = som / (double) 66;
        printf("%.1lf\n", media);
    }

    return 0;
}