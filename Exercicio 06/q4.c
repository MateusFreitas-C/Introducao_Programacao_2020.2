#include <stdio.h>
#include <math.h>

int main(void){
    int n, a, b;
    double media;

    printf("Digite o valor:  ");
    scanf("%d", &a);

    n = 0;
    b = 0;

    while(a != 0){
        n = n + 1;
        b = a + b;
        printf("Digite o valor:  ");
        scanf("%d", &a);

    }

    media = b / n;
    printf("A media eh: %.1lf", media);

return 0;
}
