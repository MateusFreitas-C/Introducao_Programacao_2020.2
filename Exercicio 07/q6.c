#include <stdio.h>
#include <math.h>


int main(void){
	char c, lixo;                                           // Variavel para definir o tipo de progressão//
	int t1, r, n, somaPa, somaPg, tnPa, tnPg;               // t1 = primeiro termo; r = razao; n = numero de termos; soma = soma de todos os termos; tn = ultimo termo//

	do{
        printf("Digite \'a\' para PA ou \'g\' para PG:  "); // usei esse laço para não ser digitado nenhuma caractere que não seja g ou a//
        scanf("%c%c", &c, &lixo);

	}while (c != 'a' && c != 'g');

    printf("Digite o primeiro termo da progressao:  ");
    scanf("%d", &t1);
    printf("Digite a razao da progressao:  ");
    scanf("%d", &r);
    printf("Digite o numero de termos da progressao:  ");
    scanf("%d", &n);

    if (c == 'a'){
        tnPa = (t1) + (n-1)* r;                            // formula termo geral da PA//
        somaPa = (((t1) + tnPa)*n) / 2;                     // formula soma de termos da PA//
    }else{
        tnPg = (t1) * (pow ((r), n-1));                     //formula termo geral PG//
        somaPg = ((t1) * (pow ((r), n)-1)) / ((r) - 1);               // formula soma de termos PG//
    }

    for(c == 'a'; tnPa >= t1; t1 = (t1) + (r)){             // laço de repeticao caso seja uma PA//
        printf("%d\n", t1);
    }

    for(c == 'g'; tnPg >= t1; t1 = (t1) * (r)){             // laço de repeticao caso seja uma PG//
        printf("%d\n", t1);
    }

    if(c == 'a'){
        printf("\n A soma da PA eh: %d", somaPa);
    }else{
        printf("\n A soma da PG eh: %d", somaPg);
    }

    return 0;
}
