#include <stdio.h>
#include <math.h>

int main(void){
    int n, maior, menor;

    printf("Digite o valor:  ");
    scanf("%d", &n);

    maior = n;
    menor = n;


    while(n != 0){
        if (n > maior){
            maior = n;
        }else if (n < menor){
            menor = n;
        }
        printf("Digite o valor:  ");
        scanf("%d", &n);
    }

    printf("O maior valor eh: %d \n",maior);
    printf("O menor valor eh: %d \n",menor);


return 0;
}
