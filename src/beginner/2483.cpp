#include <iostream>
 
using namespace std;
 
int main(void) {
    string message = "Feliz natal!";
    int t;
    cin >> t;

    for(int i = 0; message[i] != '\0'; i++) {
        cout << message[i];
        if(message[i] == 't') {
            for(int i = 0; i < t - 1; i++) {
                cout << "a";
            }
        }
    }
    cout << endl;
 
    return 0;
}