#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    long int seguidoresAtuais, minSeguidores, aux, somatorio = 0, media = 0, dias_count = 0;

    // Vetor de dias
    vector<long int> dias;

    cin >> seguidoresAtuais >> minSeguidores;

    // setando o vetor e o somatorio dos dias
    for(int i = 0; i < 30; i++) {
        cin >> aux;
        dias.push_back(aux);
        somatorio += dias[i];
    }

    while(1) {
        if(seguidoresAtuais >= minSeguidores) break;

        for(int i = 0; i < dias.size() && seguidoresAtuais < minSeguidores; i++) {
            media = ceil(somatorio / 30.0);
            seguidoresAtuais += media;
            somatorio += (media - dias[i]);
            dias[i] = media;
            dias_count++;
        }
    }
    
    cout << dias_count << endl;

    return 0;
}