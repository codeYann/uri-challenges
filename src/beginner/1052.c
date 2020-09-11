#include <stdio.h>
const int size = 13;
int main(void) {

    int option;
    scanf("%d", &option);
    
    char meses[13][20] = {
        " ",
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    printf("%s\n", meses[option]);
    
 
    return 0;
}