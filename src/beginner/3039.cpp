#include <iostream>
 
using namespace std;
 
int main(void) {
    int t, k = 0, n = 0;
    string name, sex;

    cin >> t;
    
    while(t--) {
        cin >> name >> sex;
        if(sex == "F") {
            n++;
        } else {
            k++;
        }
    }

    cout << k << " carrinhos" << endl;
    cout << n << " bonecas" << endl;
    return 0;
}