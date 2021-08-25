#include <stdio.h>
#include <math.h>

int DELTA(int x, int y, int z){
    int delta;
    delta = (y * y) - 4 * x * z;
    return delta;
}

float X1(int x, int y, int d){
    int x1;
    x1 = (-y + sqrt(d)) / (2*x);
    return x1;
}

float X2(int x, int y, int d){
    int x2;
    x2 = (-y - sqrt(d)) / (2*x);
    return x2;
}

int main(void){
    float a, b, c, delta;
    float x1, x2, x;
    puts("--------------Calculadora Funcao do Segundo Grau--------------\n");

    printf("Digite o valor de a: "); // O valor de a nunca pode ser 0 ou não será equação do segundo grau.
    scanf("%f", &a);

    if (a==0){
        printf("\nA = 0 nao forma equacao do segundo grau\n");
        return 1;
    }else{
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    printf("A equacao eh: %.fx^2 + %.fx + %.f\n\n", a, b, c);
    }

    delta = DELTA(a, b, c);

    printf("O delta eh: %.1f\n\n", delta);
        if(delta<0){
         printf("Nao se extrai raiz desse numero.\n\n");
         system("pause");
         return 2;
        } else

        if (delta == 0){
            printf("Delta = 0. A equacao possui apenas uma raiz.\n");
            x = (-b + sqrt(delta)) / (2*a);
            printf("O valor de X e: %.1f\n", x);
        } else{
                x1 = X1(a, b , delta);
                x2 = X2(a, b , delta);
        printf("O valor de X1 e X2 respectivamente: %.1f, %.1f\n\n", x1, x2);
        }

    system("pause");

    return 0;
}
