#include <iostream>
#include <stdlib.h>

using namespace std;

int sortEven(const void* a, const void* b) {
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
 
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    
    return 0;
}

int sortOdd(const void* a, const void* b) {
    int arg1 = *(const int *)a;
    int arg2 = *(const int *)b;

    if (arg1 < arg2)
        return 1;
    if (arg1 > arg2)
        return -1;

    return 0;
}

int main(int argc, char* argv[]) {
    long int t, k;
    long int* vector, *evenVector, *oddVector;
    int oddCounter = 0, evenCounter = 0;
    
    cin >> t;

    vector = (long int *) malloc(sizeof(long int) * t);

    
    for(int i = 0; i < t; i++) {
        cin >> k;
        vector[i] = k;
    }

    for(int i = 0; i < t; i++) {
        if(vector[i] % 2 == 0) {
            evenCounter += 1;
        } else {
            oddCounter += 1;
        }
    }
    
    evenVector = (long int *) malloc(sizeof(long int) * evenCounter);
    oddVector = (long int *) malloc(sizeof(long int) * oddCounter);

    for(int i = 0, evenPos = 0, oddPos = 0; i < t; i++) {
        if(vector[i] % 2 == 0) {
            evenVector[evenPos] = vector[i];
            evenPos++;
        } else {
            oddVector[oddPos] = vector[i];
            oddPos++;
        }
    }

    qsort(evenVector, evenCounter, sizeof(long int), sortEven);
    qsort(oddVector, oddCounter, sizeof(long int), sortOdd);

    for(int i = 0; i < evenCounter; i++) 
        cout << evenVector[i] << endl;

    for (int i = 0; i < oddCounter; i++) 
        cout << oddVector[i] << endl;

    free(evenVector);
    free(oddVector);
    free(vector);

    return 0;
} 