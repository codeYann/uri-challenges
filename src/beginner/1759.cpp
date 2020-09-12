#include <iostream>
 
using namespace std;
 
int main(void) {
    long int N;
    
    cin >> N;

    for(int i = 1; i <= N; i++) {
        if(i == N) {
            cout << "Ho!" << endl;
            break;
        }
        cout << "Ho ";
    }
 
    return 0;
}