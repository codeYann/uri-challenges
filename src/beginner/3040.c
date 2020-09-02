#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);

    while(t--) {
        int height, thickness, branches;
        scanf("%d %d %d", &height, &thickness, &branches);
        if(height >= 200 && height <= 300 && thickness >= 50 && branches >= 150)
            printf("Sim\n");
        else
            printf("Nao\n");
    }
}