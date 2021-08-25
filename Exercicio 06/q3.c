#include <stdio.h>
#include <math.h>

int main(void){
    int a, b, c;

    printf("Digite os valores:  ");
    scanf("%d%d", &a, &b);

    if (a > b){
        c = a;
        a = b;
        b = c;
    }
    while (a <= b){
           printf("%d\n", a);
           a = a + 1;
    }


return 0;
}
