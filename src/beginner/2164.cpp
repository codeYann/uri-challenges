#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

double fib(int n) {
    return (pow(((1 + sqrt(5))/ 2), n) - pow(((1-sqrt(5)) / 2), n)) / sqrt(5);
} 

int main(void) {
    unsigned int t;
    double result;
    cin >> t;

    result = fib(t);
    
    printf("%.1lf\n", result);
    return 0;
}