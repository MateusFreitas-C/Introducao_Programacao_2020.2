#include <stdio.h>

int main(void){
    float peso, altura, imc;

    printf("O peso eh: ");
    scanf("%f", &peso);

    printf("A altura em metros eh: ");               //Informar altura em metros
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    printf("O IMC eh: %f", imc);

    return 0;
}
