#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef struct {
    string  nome;
    int     validade;
} Carnes;


bool compare(const Carnes a, const Carnes b) {
   return a.validade < b.validade;
}

int main(int argc, char* argv[]) {
    int t;
    while(cin >> t) {
        Carnes k[t];
        for(int i = 0; i < t; i++) cin >> k[i].nome >> k[i].validade;
        
        stable_sort(k, k+t, compare);
        
        for (int i = 0; i < t; i++) {
            if(i != 0) cout << " ";
            cout << k[i].nome;
            k[i].nome.clear(), k[i].validade = 0;
        }

        cout << endl;
        
    }
    return 0;
}