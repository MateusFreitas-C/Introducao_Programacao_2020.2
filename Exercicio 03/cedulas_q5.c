#include <stdio.h>

int main() {
 int valor, quantidade, resto;


    scanf("%d", &valor);

    quantidade = valor / 100;
    resto = valor % 100;
    printf("%d nota(s) de R$ 100,00\n", quantidade);

    valor = resto;
    quantidade = valor / 50;
    resto = valor % 50;
    printf("%d nota(s) de R$ 50,00\n", quantidade);

    valor = resto;
    quantidade = valor / 20;
    resto = valor % 20;
    printf("%d nota(s) de R$ 20,00\n", quantidade);

    valor = resto;
    quantidade = valor / 10;
    resto = valor % 10;
    printf("%d nota(s) de R$ 10,00\n", quantidade);

    valor = resto;
    quantidade = valor / 5;
    resto = valor % 5;
    printf("%d nota(s) de R$ 5,00\n", quantidade);

    valor = resto;
    quantidade = valor / 2;
    resto = valor % 2;
    printf("%d nota(s) de R$ 2,00\n", quantidade);

    valor = resto;
    quantidade = valor / 1;
    resto = valor % 1;
    printf("%d nota(s) de R$ 2,00\n", quantidade);

    return 0;
}
