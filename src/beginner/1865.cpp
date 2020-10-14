#include <iostream>
 
using namespace std;
 
int main(void) {
    int t, N = 0;
    string heroe;
    cin >> t;

    while(t--) {
        cin >> heroe;
        cin >> N;

        if(heroe == "Thor") {
            cout << "Y" << endl;
        } else {
            cout << "N" << endl;
        }
    }
 
    return 0;
}