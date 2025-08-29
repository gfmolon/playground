#include <stdio.h>

int main() {

    int dec;
    int d1, d2, d3, d4, d5, d6;

    printf("Informe o número decimal:\n");
    scanf("%d",&dec);

    d6 = (dec / 1) % 2;
    d5 = (dec / 2)  % 2;
    d4 = (dec / 4) % 2;
    d3 = (dec / 8) % 2;
    d2 = (dec / 16) % 2;
    d1 = (dec / 32) % 2;

    printf("%d em decimal é %d %d %d %d %d %d em binário.\n", dec, d1, d2, d3, d4, d5, d6);


    return 0;
}
