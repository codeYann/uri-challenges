#include <iostream>

using namespace std;

int main(void) {
    int i = 1, j = 7;

    while (1) {
        
        if (j < 5) {
            j = 7;
            i = i + 2;
        }

        cout << "I=" << i << " J=" << j << endl;
        j--;

        if (i == 9 && j < 5)
            break;
    }

    return 0;
}