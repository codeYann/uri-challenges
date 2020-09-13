#include <iostream>
 
using namespace std;
 
int main(void) {
    int minutes, t = 0;
    cin >> minutes;

    t = (60 * minutes) / 30;

    cout << t << " minutos" << endl;



    return 0;
}