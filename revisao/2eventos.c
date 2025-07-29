#include <stdio.h>

int main() {
    
    int h1,m1, minutos_evento1;
    int h2,m2, minutos_evento2;
    int duracao, duracao_hora, duracao_minutos;

    printf("Informe a hora e minutos do primeiro evento:\n");
    scanf("%d%d",&h1,&m1);

    printf("informe a hora e minutos do segundo evento:\n");
    scanf("%d%d",&h2,&m2);

    minutos_evento1 = h1*60 + m1;
    minutos_evento2 = h2*60 + m2;

    if(minutos_evento1 < minutos_evento2) {
        duracao = minutos_evento2 - minutos_evento1;
    } else {
        duracao = (24*60) - (minutos_evento1 - minutos_evento2);
    }

    duracao_hora = duracao / 60;
    duracao_minutos = duracao % 60;

    printf("Duração do Evento: %dh %dmin\n", duracao_hora, duracao_minutos);

}
