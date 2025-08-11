#include <stdio.h>

int main() {

    int hi, mi, hf, mf;
    int duracao_min_i, duracao_min_f, duracao_min,  dh, dm;

    printf("Digite Hora e Minutos do evento:\n");
    scanf("%d %d", &hi, &mi);

    printf("Digite Hora e Minutos finais do evento:\n");
    scanf("%d %d", &hf, &mf);

    duracao_min_i = hi*60 + mi;
    duracao_min_f = hf*60 + mf;

    duracao_min = duracao_min_f - duracao_min_i;

    if (duracao_min_f < duracao_min_i) {
        duracao_min = (24*60) - (duracao_min_i - duracao_min_f); 
    }

    dh = duracao_min / 60;
    dm = duracao_min % 60;

    printf("Duração do evento: %dh %dm\n", dh, dm);


}
