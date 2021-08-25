#include <stdio.h>
#include <math.h>

int main(void){
    int idade;

    printf("Digite a idade:  ");
    scanf("%d", &idade);

    if (idade < 18){
        printf("Eh um jovem!");
    }else if (idade >= 18 && idade < 60){
              printf("Eh adulto!!");
        } else{
              printf("Eh idoso!!");
        }






















return 0;
}
