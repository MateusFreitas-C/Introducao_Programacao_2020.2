#include <stdio.h>
#include <math.h>


int main(void){
	char c, lixo;
	int t1, r, n, i, soma;

	do{
        printf("Digite \'a\' para PA ou \'g\' para PG:  ");
        scanf("%c%c", &c, &lixo);

	}while (c != 'a' && c != 'g');

    printf("Digite o primeiro termo da progressao:  ");
    scanf("%d", &t1);
    printf("Digite a razao da progressao:  ");
    scanf("%d", &r);
    printf("Digite o numero de termos da progressao:  ");
    scanf("%d", &n);

    soma = 0;

    for(i = 1; n >= i; i = i + 1){
        if(c == 'a'){
            printf("%d\n", t1);
            soma = soma + t1;
            t1 = t1 + r;
        }else {
            printf("%d\n", t1);
            soma = soma + t1;
            t1 = t1 * r;
        }
    }

    if(c == 'a'){
        printf("\n A soma da PA eh: %d", soma);
    }else{
        printf("\n A soma da PG eh: %d", soma);
    }

    return 0;
}
