#include <stdio.h>

int main() {

    int data, dia, mes, ano, resto;

    printf("Informe uma data:\n");
    scanf("%d",&data);

    //11/22/3333

    ano = data % 10000; 
    printf("Ano: %d\n",ano);

    mes = (data / 10000) % 100;
    printf("Mês: %d\n",mes);

    dia = (data / 1000000) % 100;
    printf("Dia: %d\n",dia);
}
