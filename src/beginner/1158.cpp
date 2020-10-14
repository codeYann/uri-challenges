#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int t, x, y, soma = 0;
  cin >> t;

  while (t--) {
    cin >> x >> y;
    for (int i = 0, iter = x; i < y; iter++) {
      if (iter % 2 != 0) {
        soma += iter;
        i += 1;
      }
    }
    cout << soma << endl;
    soma = 0;
  }
}
