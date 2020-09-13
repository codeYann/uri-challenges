#include <iostream>
#include <bits/stdc++.h>

using namespace std;
 
int main(void) {
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;
        float digit = log10(n) * m;
        cout << (int) floor(digit) + 1 << endl;
    }
    return 0;
}