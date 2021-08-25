#include <stdio.h>

int main(void){
    float media1, media2, media3, media4, mediafinal;

    printf("A media do Bimestre 1 eh: ");
    scanf("%f", &media1);

    printf("A media do Bimestre 2 eh: ");
    scanf("%f", &media2);

    printf("A media do Bimestre 3 eh: ");
    scanf("%f", &media3);

    printf("A media do Bimestre 4 eh: ");
    scanf("%f", &media4);

    mediafinal = ((media1*1) + (media2*2) + (media3*3) + (media4*4)) / (1 + 2 + 3 + 4);
    printf("A media anual eh: %.2f", mediafinal);

    return 0;
}
