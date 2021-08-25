#include <stdio.h>
#include <math.h>

int main(void){
    int i, resto;




    for(i = 1; i <= 200; i = i + 1){

        resto = i%2;
        if(resto == 0){
           printf("Soh aprende a programar quem escreve programas\n");
        }else{
           printf("Quem nao escreve programas nao aprende a programar\n");
        }

    }



return 0;
}
