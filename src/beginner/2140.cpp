#include <iostream>
 
using namespace std;
 
int main(void) {
    long int n, m;
    int possibilidades[15] = {7, 12, 15, 22, 25, 30, 52, 55, 60, 70, 102, 105, 110, 120, 150};
    int troco, status = 0;

    
    while(1) {
        cin >> n >> m;
        if(n == 0 && m == 0) break;
        
        troco = m - n;

        for(int i = 0; i < 15; i++) {
            if(possibilidades[i] == troco) {
                status = 1;
                break;
            }
        }

        if(status) 
            cout << "possible" << endl;
        else 
            cout << "impossible" << endl; 
    }
    return 0;  
}