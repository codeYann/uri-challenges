#include <iostream>
 
using namespace std;
 
int main(void) {
    int i = 1, j = 7, aux = j, temp = 5;

    while(1) {
        if(j < temp) {
            aux += 2;
            j = aux;
            i += 2;
            temp += 2;
        }
        cout << "I=" << i << " J=" << j << endl;
        j--;
        if(i == 9 && j < 13) break;
    }
 
    return 0;
}