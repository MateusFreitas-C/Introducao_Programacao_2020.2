#include <stdio.h>
#include <math.h>

void CalculaHexagono (float l, float *area, float *perimetro){

    *area = (3 * (l*l)* sqrt(3)) / 2;

    *perimetro = 6*l;
}

int main(){
    float l, area, perimetro;

    printf("Digite o lado do hexagono:\n");
    scanf("%f", &l);

    CalculaHexagono(l, &area, &perimetro);
    printf("Area = %f\n", area);
    printf("Perimetro = %.1f\n", perimetro);

    return 0;
}
