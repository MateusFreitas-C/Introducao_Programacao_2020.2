#include <stdio.h>
#include <math.h>

int main(void){
    float notaMaior1, notaMaior2, notaMaior3;
    float notaMenor1, notaMenor2, notaMenor3;
    float mediaU1, mediaU2, mediaU3, mediaFinal;

    printf("Coloque a maior nota da Unidade 1: ");
    scanf("%f", &notaMaior1);
    printf("Coloque a menor nota da Unidade 1: ");
    scanf("%f", &notaMenor1);

    mediaU1 = (6*notaMaior1 + 4*notaMenor1)/ (6+4);
    printf("A media da Unidade 1 eh: %.1f\n\n", mediaU1);


    printf("Coloque a maior nota da Unidade 2: ");
    scanf("%f", &notaMaior2);
    printf("Coloque a menor nota da Unidade 2: ");
    scanf("%f", &notaMenor2);

    mediaU2 = (6*notaMaior2 + 4*notaMenor2)/ (6+4);
    printf("A media da Unidade 2 eh: %.1f\n\n", mediaU2);



    printf("Coloque a maior nota da Unidade 3: ");
    scanf("%f", &notaMaior3);
    printf("Coloque a menor nota da Unidade 3: ");
    scanf("%f", &notaMenor3);

    mediaU3 = (6*notaMaior3 + 4*notaMenor3)/ (6+4);
    printf("A media da Unidade 3 eh: %.1f\n\n", mediaU3);

    mediaFinal = (mediaU1 + mediaU2 + mediaU3) / 3;
    printf("A media final do Semestre eh: %.1f\n", mediaFinal);

    if (mediaFinal >=9 && mediaFinal <=10){
        printf("Conceito: A\n");

    }   if (mediaFinal >=8 && mediaFinal<9){
            printf("Conceito: B\n");

        } if (mediaFinal >=7 && mediaFinal<8){
              printf("Conceito: C\n");

            } if (mediaFinal >=6 && mediaFinal<7){
                  printf("Conceito: D\n");

                } if (mediaFinal >=5 && mediaFinal<6){
                      printf("Conceito: E\n");

                    } if (mediaFinal < 5){
                          printf("Conceito: F\n");

                    }





return 0;
}
