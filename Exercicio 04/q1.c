#include <stdio.h>
#include <math.h>

int main(void){
    int a, b;

    printf("Valor de A: ");
    scanf("%d", &a);

    printf("Valor de B: ");
    scanf("%d", &b);

        if (a==b){
            printf("\nOs valores s�o iguais: o valor eh = %d", b);
        } else
            if(a<b){
                printf("\nO valor de a eh menor: a = %d\n", a);
        }   else{
                printf("\nO valor de b eh menor: b = %d\n", b);
        }


    return 0;
}
