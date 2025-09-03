
#include <stdio.h>

int main() {

    float valor_hora, calculo = 0;
    int he, hs, duracao, horas_normais = 0, horas_adicionais = 0;

    printf("Informe o valor por hora.\n");
    scanf("%f",&valor_hora);

    printf("Informe a hora de entrada e depois a hora de saída do trabalhador.\n");
    scanf("%d%d",&he,&hs);

    duracao = hs - he;

    // Horas normais (entre 6h e 20h)
    if (he >= 6 && hs <= 20) {
        horas_normais = hs - he;
    }

    // Antes das 6h
    if (he < 6) {
        if (hs > 6) {
            horas_adicionais += 6 - he;
        } else {
            horas_adicionais += hs - he;
        }
    }

    // Depois das 20h
    if (hs > 20) {
        if (he < 20) {
            horas_adicionais += hs - 20;
        } else {
            horas_adicionais += hs - he;
        }
    }

    // Cálculo final
    calculo = (horas_normais * valor_hora) + (horas_adicionais * valor_hora * 1.2);

    printf("Duração jornada de trabalho: %d horas\n", duracao);
    printf("Valor total: %.2f\n", calculo);

    return 0;
}
