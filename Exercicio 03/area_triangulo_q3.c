#include <stdio.h>

int main(void){
    int b, h; //b = base; h = altura; a = area
    float a;

    printf("A base eh: ");
    scanf("%d", &b);

    printf("A altura eh: ");
    scanf("%d", &h);

    a = b * h /2.0;
    printf("A area eh: %.1f", a);



    return 0;
}
