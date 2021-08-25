#include <stdio.h>

int main(void){
    int valorsegundos, horas, minutos, segundos;


    printf("Digite o valor em segundos:  ");
    scanf("%d", &valorsegundos);

    horas = valorsegundos / 3600;
    minutos = (valorsegundos % 3600) / 60;
    segundos = valorsegundos % 60;

    printf("O valor equivalente de %d segundos valem: %02dh%02dm%02ds", valorsegundos, horas, minutos, segundos);



    return 0;
}
