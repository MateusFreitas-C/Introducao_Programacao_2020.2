#include <stdio.h>

int main(void){
    float Nota1, Nota2, Nota3;
    float Media;

    printf("Nota1:" );
    scanf("%f", &Nota1 );
    printf("Nota2:" );
    scanf("%f", &Nota2 );
    printf("Nota3:" );
    scanf("%f", &Nota3 );

    Media = (Nota1 + Nota2 + Nota3) / 3;
    printf("A Media eh: %.1f\n",Media);

    return 0;
}
