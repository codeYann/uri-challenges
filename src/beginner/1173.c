#include <stdio.h>

signed int main() {
    int v, list[10], set = 1;

    scanf("%d", &v);
    list[0] = v;

    for(int i = 1; i < 10; i = i + 1) {
         set = v *= 2;
        list[i] = set;
    }
    for(int i = 0; i < 10; i = i + 1) {
        printf("N[%d] = %d\n", i, list[i]);
    }
       

    return 0;
}