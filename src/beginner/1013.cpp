#include <iostream>
#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int k, n, j, greatestBetweenKN = 0, greatest;
    cin >> k >> n >> j;

    greatestBetweenKN = (k + n + abs(k - n)) / 2;
    greatest = (j + greatestBetweenKN + abs(j - greatestBetweenKN)) / 2;

    cout << greatest << " eh o maior" << "\n";

    return 0;
}