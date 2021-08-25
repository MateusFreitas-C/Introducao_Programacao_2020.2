#include <stdio.h>

int main(void){
    float RendimentoLata;
    float Altura;
    float Comprimento;
    float VolumeLitro;
    float QuantidadeLatas;
    float Area;

    printf("Comprimento:  ");
    scanf("%f", &Comprimento);   /* Definir Comprimento da Parede em metros*/

    printf("Altura:  ");
    scanf("%f", &Altura);        /* Definir Altura da Parede em metros*/

    Area = (Comprimento*Altura);
    printf("Area = %.2f\n", Area); /* Valor da area a ser pintada em metros quadrados*/

    printf("VolumeLitro:  ");
    scanf("%f", &VolumeLitro);     /* Volume em Litros da lata de tinta que pretende-se comprar*/

    printf("RendimentoLata:  ");
    scanf("%f", &RendimentoLata);  /* Rendimento da lata em metro quadrado/litro normalmente informada no rótulo da tinta */

    QuantidadeLatas = Area / (RendimentoLata * VolumeLitro);  /* Resultado final*/
    printf("Quantidade de Latas: %.1f", QuantidadeLatas);


    return 0;
}
