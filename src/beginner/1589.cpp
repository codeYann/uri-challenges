#include <iostream>
 
using namespace std;
 
int main(void) {
    int t;
    int32_t r1, r2;
    long total = 0;
    
    cin >> t;
    
    while(t--) {    
        cin >> r1 >> r2;
        total = r1 + r2;
        cout << total << endl;
    }
    return 0;
}