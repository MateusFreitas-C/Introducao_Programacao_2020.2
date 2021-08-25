#include <stdio.h>
#include <math.h>

int main(void){
    int i, resto, x;




    for(i = 1; i <= 1000; i = i + 1){

        resto = i%10;
        x = i%6;
        if(resto == 4 && x == 0){
           printf("%d\n", i);
        }

    }



return 0;
}
