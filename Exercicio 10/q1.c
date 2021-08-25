#include <stdio.h>

double AdicioneNaMedia(double v){
    static int i = 0;
    static double soma=0;
    soma += v;
    i++;
    return soma/i;
}

int main(void){
    int q;
    double media, valor;

    printf("Quantos valores serao inseridos?\n");
    scanf("%d", &q);

    for (int i = 1; i <= q; i++){
        printf("Digite o valor: ");
        scanf("%lf", &valor);
        media = AdicioneNaMedia(valor);
        printf("A media eh: %.1lf\n", media);
    }

    return 0;
}
