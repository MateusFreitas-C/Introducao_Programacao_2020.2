#include <stdio.h>

int main(void){
    float peso, altura, imc;

    printf("O peso eh: ");
    scanf("%f", &peso);

    printf("A altura em metros eh: ");               //Informar altura em metros
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    printf("O IMC eh: %f\n", imc);

    if (imc <= 18.5){
        printf("Baixo peso!");
    }else if (imc > 18.5 && imc <= 25){
              printf("Peso normal!");
        }else if (imc > 25 && imc <= 30){
                 printf("Sobrepeso!");
        }else{
        printf("Obesidade!");
        }



    return 0;
}
