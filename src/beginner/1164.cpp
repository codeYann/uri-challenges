#include <iostream>
 
using namespace std;
 
int main(void) {
    
    int t;
    long long k, ans;
    cin >> t;

    while(t--) {
        ans = 0;
        cin >> k;

        for(int i = 1; i < k; i++) {
            if((k % i) == 0) {
                ans += i;
            }
        }
        if(k == ans) {
            cout << k << " eh perfeito" << endl;
        } else {
            cout << k << " nao eh perfeito" << endl;
        }

    }

    return 0;
} 