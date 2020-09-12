#include <iostream>
#include <stdio.h>

using namespace std;

int main(void) {
    int a, b, r, q;
    
    cin >> a >> b;

    q = a / b;
    r = a % b;

    if (r < 0) {
        if (q < 0){
            q--;
        }
        
        if (q > 0) {
            q++;
        }
        
        r = a - (b * q);
    }
    cout << q << " " << r << endl;
    
    return 0;
}