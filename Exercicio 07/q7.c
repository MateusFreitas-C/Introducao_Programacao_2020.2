#include <stdio.h>
#include <math.h>

int main(void){
    int n, i, resultado;

    printf("Digite \'n\': ");
    scanf("%d", &n);
    resultado = 0;
    for(i = 1; i < n; i= i+1){
        if (n%i == 0){
        resultado = resultado + 1;
        }
    }
    if (resultado == 1){
        printf("%d eh primo", n);
    }else {
        printf("%d nao eh primo", n);
    }



return 0;
}
