#include <iostream>
using namespace std;
 
int main() {
    int x, y, lowest, biggest, count = 0;
    
    cin >> x >> y;

    lowest = x < y ? x : y;
    biggest = x > y ? x : y;
    
    for(int i = lowest; i <= biggest; i++) {
        if(i % 13 != 0) {
            count += i;
        }
    }
    cout << count << endl;

    return 0;
}