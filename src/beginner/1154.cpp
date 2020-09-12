#include <iostream>
#include <stdio.h>

using namespace std;
 
int main(void) {
    int age, acc = 0, times = 0;
    double media;

    while(1) {
        cin >> age;
        if(age < 0) break;
        acc += age;
        times++;
    }

    media = acc / (double) times;
    printf("%.2lf\n", media);
    return 0;
}