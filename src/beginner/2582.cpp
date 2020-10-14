#include <iostream>
 
using namespace std;
 
int main(void) {
    char songs[][25] = {"PROXYCITY","P.Y.N.G.","DNSUEY!","SERVERS","HOST!","CRIPTONIZE","OFFLINE DAY","SALT","ANSWER!","RAR?","WIFI ANTENNAS"};
    
    int t, k, n;
    cin >> t;

    while(t--) {
        cin >> k >> n;
        cout << songs[k + n] << endl;
    }
    
    return 0;
}