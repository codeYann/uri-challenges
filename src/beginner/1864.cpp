#include <iostream>

using namespace std;
 
int main() {
    int k;
    cin >> k;

    char text[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    
    for(int i = 0; i < k; i++) {
        cout << text[i];
    }
    cout << endl;

    return 0;
}