#include <stdio.h>

int main(void){
    float diametro, raio, area, circunferencia;

    printf("O diametro eh:  ");
    scanf("%f.",&diametro);

    raio = diametro / 2;
    printf("O raio eh: %.2f\n", raio);

    area = 3.14 * raio * raio;
    printf("A area eh: %.2f\n", area);

    circunferencia = 2 * 3.14 * raio;
    printf("A circunferencia eh: %2.f\n", circunferencia);


    return 0;
}
