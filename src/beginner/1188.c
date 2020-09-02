#include <stdio.h>

#define row  12
#define col  12

double somatorio(double matriz[12][12], int k, int n) {
    double sum = 0;
    int  count_col = 10;
    for(int i = k; i >= 7; i--) {
        for(int j = n; j <= count_col; j++) {
            sum += matriz[i][j];
        }
        n++;
        count_col--;
    }
    return sum;
}

int main(void) {
    char caractere[2];
    scanf("%s",caractere);

    double matriz[row][col], som = 0, media = 0;

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++)
            scanf("%lf", &matriz[i][j]);
    }

    if(caractere[0] == 'S') {
        som = somatorio(matriz, row - 1, 1);
        printf("%.1lf\n", som);
    } else {
        som = somatorio(matriz, row - 1, 1);
        media = som / (double) 30;
        printf("%.1lf\n", media);
    }

    return 0;
}