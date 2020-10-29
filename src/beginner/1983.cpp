#include <iostream>
 
using namespace std;
 
int main(void) {
    int t;
    float nota, maior_nota;
    long int matricula, matricula_escolhida;

    cin >> t >> matricula >> nota;
    maior_nota = nota;
    matricula_escolhida = matricula;
    t--;
    
    while(t--) {
        cin >> matricula >> nota;
        if(maior_nota < nota) {
            matricula_escolhida = matricula;
            maior_nota = nota;
        }
    }
    
    if(maior_nota >= 8.0) {
        cout << matricula_escolhida << endl;
    } else {
        cout << "Minimum note not reached" << endl;
    }
    return 0;
}