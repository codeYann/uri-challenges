#include <stdio.h>

int main(void) {
    int password = 2002;
    int hash = 0;

    while(1) {
        scanf("%d", &hash);
        if(hash == password) {
            printf("Acesso Permitido\n");
            break;
        } else {
            printf("Senha Invalida\n");
        }
    }
    return 0;
} 