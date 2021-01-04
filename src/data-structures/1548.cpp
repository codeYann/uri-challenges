#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
    int t;
    cin >> t;
    
    while(t--) {
        int quantidade_alunos, n, aux, status = 0;
        vector<int> vetor_notas;
        vector<int> changed;

        cin >> quantidade_alunos;
        
        for(int i = 0; i < quantidade_alunos; i++) {
            cin >> n;
            vetor_notas.push_back(n);
            changed.push_back(n);
        }

        for(int i = 0; i < changed.size(); i++) {
            for(int j = i + 1;  j < changed.size(); j++) {
                if(changed[i] < changed[j]) {
                    aux = changed[i];
                    changed[i] = changed[j];
                    changed[j] = aux;
                }
            }
        }

        for(int i = 0; i < changed.size(); i++) {
            if(vetor_notas[i] != changed[i]) {
                status++;
            }
        }

        cout << (status - quantidade_alunos) * -1  << endl;
    }

    return 0;
}