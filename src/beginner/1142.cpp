#include <iostream>
using namespace std;

int main() {
    int N, count = 0;
    cin >> N;

    while(N--) {
        for (int i = 1; i <= 3; i++) {
            count += 1;
            cout << count << " ";
        }
        count += 1;
        cout << "PUM" << endl;
    }
    return 0;
}  