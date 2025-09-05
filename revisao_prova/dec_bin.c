#include <stdio.h>

int main() {

    int n = 28;
    int d1, d2, d3, d4, d5, d6;
    
    d6 = (n / 1 ) %  2;
    d5 = (n / 2) % 2;
    d4 = (n / 4) % 2;
    d3 = (n / 8) % 2;
    d2 = (n / 16) % 2;
    d1 = (n / 32) % 2;

    printf("%d %d %d %d %d %d\n", d1, d2, d3, d4, d5, d6);

    return 0;
}
