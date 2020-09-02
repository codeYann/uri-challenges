#include <stdio.h>
const int row = 12;
const int col = 12;

double somatorio(double matriz[12][12], int k, int n) {
      double sum = 0;
      int count_col = 10;
      for(int j = k; j <= 4; j++) {
          for(int i = n; i <= count_col; i++) {
              sum += matriz[i][j];
          }
          n++;
          count_col--;
      }
      return sum;
}

int main(void) {
    char caractere[2];
    double matriz[row][col], som = 0, media = 0;
    scanf("%s", caractere);

    for(int i = 0; i < row; i++) {
      for(int j = 0; j < col; j++) {
        scanf("%lf", &matriz[i][j]);
      }
    }

    if(caractere[0] == 'S') {
        som = somatorio(matriz, 0, 1);
        printf("%.1lf\n", som);
    } else {
        som = somatorio(matriz, 0, 1);
        media = som / (double) 30;
        printf("%.1lf\n", media);
    }

    return 0;
}