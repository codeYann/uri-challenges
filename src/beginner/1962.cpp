#include <iostream>
 
using namespace std;
 
int main(void) {
    unsigned long long n;
    long long t, k;

    cin >> n;

    while(n--) {
        cin >> t;
        if(t < 2015) {
            k = 2015 - t;
            cout << k << " D.C." << endl;
        } else {
            k = t - 2014;
            cout << k << " A.C." << endl;
        }
    }

    return 0;
}