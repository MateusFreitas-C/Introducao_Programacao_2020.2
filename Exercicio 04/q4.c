#include <stdio.h>
#include <math.h>

int main(void){
    int a, b, c;

    printf("Digite A: ");
    scanf("%d", &a);

    printf("Digite B: ");
    scanf("%d", &b);

    printf("Digite C: ");
    scanf("%d", &c);

        if (a>b){

                if (a>c){
                printf("\nO valor de a eh o maior: a = %d", a);

                }    else {
                printf("\nO valor de c eh o maior: c = %d", c);
                }

            } else {
                    if (b>c){
                    printf("\nO valor de b eh o maior: b = %d", b);

                    }   else {
                    printf("\nO valor de c eh o maior: c = %d", c);
                    }
            }





return 0;
}
