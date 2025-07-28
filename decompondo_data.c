#include <stdio.h>

int main () {

    int data1, data2;
    int d1, m1, a1, d2, m2, a2;

    printf("Escreva a data:\n");
    scanf("%d",&data1);

    
    d1 = (data1 / 1000000) % 100; 
    m1 = (data1 / 10000) % 100;
    a1 = data1 % 10000;

    printf("Data1: %d\n", data1);
    printf("%d/%d/%d\n", d1, m1, a1);

}
