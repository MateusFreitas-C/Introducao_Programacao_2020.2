#include <stdio.h>
#include <math.h>

int main(void){
    float a, b, c;
    float delta, x1, x2, x;

    printf("Digite o valor de a: "); // O valor de a nunca pode ser 0 ou não será equação do segundo grau.
    scanf("%f", &a);
    if (a==0){
        printf("\nA = 0 nao forma equacao do segundo grau\n");

        return 1;

        }
    else

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    printf("A equacao eh: %.fx^2 + %.fx + %.f\n\n", a, b, c);

    delta = (b * b) - 4 * a * c;


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

                x1 = (-b + sqrt(delta)) / (2*a);
                x2 = (-b - sqrt(delta)) / (2*a);
        printf("O valor de X1 e X2 respectivamente: %.1f, %.1f\n\n", x1, x2);
            }



    system("pause");


    return 0;
}
