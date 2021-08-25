#include <stdio.h>
#include <math.h>

int ResolveEquacao2Grau (float a, float b, float c, float *x1, float *x2){

    int delta = (b*b) - 4 * a * c;

    if (delta >= 0){
        *x1 = (-b + sqrt(delta)) / (2*a);
        *x2 = (-b - sqrt(delta)) / (2*a);

        return 0;

    }if (a == 0){

        return -1;

    }if (delta<0){
        return -2;
    }

}

int main(){
    float a, b, c, x1, x2;
    int resultado;

    printf("Digite os coeficientes (a, b, c) da equacao de 2 grau:\n");
    scanf("%f %f %f", &a, &b, &c);

    resultado = ResolveEquacao2Grau(a, b, c, &x1, &x2);
    if (resultado == 0){
        printf("X1 = %.1f\n", x1);
        printf("X2 = %.1f\n", x2);

    }if(resultado == -1){
        printf("Nao se extrai raiz quando a for menor que 0\n");

    }if(resultado == -2){
        printf("A equacao nao possui raizes reais");
    }

    return 0;
}
