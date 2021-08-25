#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, correto, tentativas;

	srand(time(NULL));
	correto = rand() % 100;
    tentativas = 0;

	do{
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);
        tentativas = tentativas + 1;

            if (palpite > correto){
            puts("Palpite alto!");
            }else if (palpite < correto){
            puts("Palpite foi baixo!");
            }

            if (tentativas == 5){
                printf("Suas chances esgotaram");
                return 1;
            }
        }
	while (palpite != correto);

    puts("Voce acertou!");
    printf("Numero de tentativas: %d", tentativas);

	return 0;
}
