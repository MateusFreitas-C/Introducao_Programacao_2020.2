#include <stdio.h>
#include <math.h>

int main(void){
    char sexo;
    float altura, pesoideal;

    printf("Defina seu sexo m para masculino ou f para feminino:  ");
    scanf("%c", &sexo);


    printf("\nDigite sua altura:  ");
    scanf("%f", &altura);

        if (sexo=='m'){
            pesoideal = (72.7*altura)- 58;
            printf("\nO seu peso ideal eh: %.2f", pesoideal);

        } else
                if (sexo=='f'){
                    pesoideal = (62.1*altura) - 44.7;
                    printf("\nO seu peso ideal eh: %.2f", pesoideal);
                } else {
                    printf("\nDefina os valores corretamente");
                    }


return 0;
}
