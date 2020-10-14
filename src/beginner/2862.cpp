#include <iostream>
 
using namespace std;
 
int main(void) {
    long long t, k;
    cin >> t;

    while(t--) {
        cin >> k;
        if(k > 8000) {
            cout << "Mais de 8000!" << endl;
        } else {
            cout << "Inseto!" << endl;
        }
    }
    return 0;
}