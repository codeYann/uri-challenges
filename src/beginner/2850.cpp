#include <iostream>
#include <stdio.h>
using namespace std;
 
int main(void) {

    string status;
    
    while(cin >> status) {
        if(status == "as") {
            cout << "caiu" << endl;
        } else if(status == "direita") {
            cout << "frances" << endl;
        } else if(status == "nenhuma") {
            cout << "portugues" << endl;
        } else if(status == "esquerda") {
            cout << "ingles" << endl;
        } 
    }
 
    return 0;
}