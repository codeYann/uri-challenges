#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main(void) {
    int count = 0;
    char myStr[500];
    
    scanf("%[^\n]s", myStr);

    while(myStr[count] != '\0')
        count++;

    if(count <= 140) {
        cout << "TWEET" << endl;
    } else {
        cout << "MUTE" << endl;
    }

    return 0;
}