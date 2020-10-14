#include <iostream>
#include <bits/stdc++.h>

using namespace std;
 
int main(void) {
    int x, soma = 0;
    while(1) {
      cin >> x;
      if(x == 0) break;
      
      for(int i = 0, iter = x; i < 5; iter++) {
        if(iter % 2 == 0) {
            soma += iter;
            i += 1;
        }
      }
      
      cout << soma << endl;
      soma = 0;
    } 

    return 0;
}
