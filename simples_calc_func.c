#include <stdio.h>

float soma(float a, float b) {
    return a +b ;
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    if (b > 0.0) {
        return a / b;
    } else {
        return 0.0;
    }
    }

float subtracao(float a, float b) {
    return a - b;
}


int main() {
   
    float a, b;
    
    printf("Digite os dois valores:\n");
    scanf("%f%f",&a,&b);

    printf("Operações:\n");

    printf("Soma:");
    printf("%.2f\n", soma(a,b));
    
    printf("Subtracao:");
    printf("%.2f\n", subtracao(a,b));

    printf("Multiplicação:");
    printf("%.2f\n", multiplicacao(a,b));

    printf("Divisão:");
    printf("%.2f\n", divisao(a,b));
}
