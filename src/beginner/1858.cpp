#include <iostream>

using namespace std;

int main(void) {
    int k, escolha = 0, pos = 0;
    cin >> k;

    int t[k];

    for (int i = 0; i < k; i++) {
        cin >> t[i];
    }

    escolha = t[0];

    for (int i = 0; i < k; i++) {
        if (t[i] < escolha) {
            escolha = t[i];
            pos = i;
        }
    }

    cout << pos + 1 << endl;

    return 0;
}