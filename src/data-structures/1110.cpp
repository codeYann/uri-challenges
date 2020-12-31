#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main(int argc, char* argv[]) {
    int t, count = 0;
    
    while(1) {
        queue<int> cards;
        int* discartedCarts, *tt;
        
        cin >> t;
        if(t == 0) break;

        for(int i = 1; i <= t; i++)
            cards.push(i);
        
        if(cards.size() == 1) {
            cout << "Discarded cards: " << endl;
            cout << "Remaining card: " << cards.front() << endl;
        } else {    
            discartedCarts = new int[cards.size() - 1];
            while(1) {
                
                if(cards.size() == 1) 
                    break;

                discartedCarts[count] = cards.front();
                cards.pop();
                cards.push(cards.front());
                cards.pop();
                count++;
            }
            cout << "Discarded cards: ";
            
            for(int i = 0; i < t - 2; i++) 
                printf("%d, ", discartedCarts[i]);
            
            cout << discartedCarts[count-1];
            cout << "\n" 
                 << "Remaining card: " << cards.front() << endl;
            
            delete discartedCarts;
            count = 0;
        }
    }

    return 0;
} 