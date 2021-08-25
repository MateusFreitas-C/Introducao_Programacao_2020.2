/**
    Laboratorio de Introducao a Programacao para Engenharia da Computacao.
    Atividade do dia 21 de junho de 2021.

    Descricao:

    Complete esse codigo fonte para criar um programa dirigido por menus que mantem um
    cadastro de um tesouro e sua localizacao.

    O tesouro sera representado por:
      - Uma descricao (dinheiros, chocolate, feriado, ponto extra)
      - Um valor em reais
      - Uma coordenada X
      - Uma coordenada Y

    As funcionalidades do programa sao:
      - Cadastro do tesouro
      - Impressao das informacoes do tesouro cadastrado
      - Informar a distancia do tesouro a partir de um determinado ponto
        inserido pelo usuario

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_DESCRICAO 51

typedef struct {
    char descricao[MAX_DESCRICAO];
    float valor;
    int x;
    int y;
    }tRegistro;

void ApresentaMensagem() {
    printf("Ola, esse programa ...\n");
}

void ApresentaMenu() {
    printf("\n\n*** Opcoes *** \n"
                "\n1 - Cadastra"
                "\n2 - Imprime"
                "\n3 - Distancia a partir de um ponto"
                "\n5 - Sair\n");
}

tRegistro * CadastroRegistro(tRegistro *reg) {
    //ler do usuario e preencher, use prompts e scanf e preencha a estrutura no parametro
        scanf("%*c");
        printf("Digite o seu tesouro: ");
        fgets(&reg->descricao, MAX_DESCRICAO, stdin);

        printf("\nDigite o valor: ");
        scanf("%f", &reg->valor);

        printf("\nDigite a coordenada X do seu tesouro: ");
        scanf("%d", &reg->x);

        printf("\nDigite a coordenada Y do seu tesouro: ");
        scanf("%d", &reg->y);

    return reg;
}

void ImprimeRegistro(const tRegistro *reg) {
    //mostrar as informacoes do registro do parametro de forma organizada
    printf("\nO tesouro eh: %s", reg->descricao);
    printf("O tesouro tem valor de %.2f reais.\n", reg->valor);
    printf("O tesouro esta localizado nas coordenadas (%d, %d).\n", reg->x, reg->y);
}

float Distancia(tRegistro reg, int x, int y){
	//funcao q retorna a distancia da coordenada dos parametros ate a coordenada do registro
    float dist;

    dist = sqrt((reg.x - x) * (reg.x - x) + (reg.y - y) * (reg.y - y));

    return dist;
}

int main(void)
{
    tRegistro reg; //guarda o registro
    int opcao, x0, y0;
    float dist;
    ApresentaMensagem();

    while(1){
        ApresentaMenu();
        scanf("%d", &opcao);

        if (opcao == 5){
            break;
        }


        switch(opcao){
            case 1:
                CadastroRegistro(&reg);
                break;
            case 2:
                ImprimeRegistro(&reg);
                break;
            case 3:
                printf("Digite sua coordenada X: ");
                scanf("%d", &x0);

                printf("Digite sua coordenada Y: ");
                scanf("%d", &y0);
                
                dist = Distancia(reg, x0, y0);
                printf("A distancia ate o tesouro eh: %.2f\n", dist);
                break;
            default:
                puts("Opcao Invalida\n");
                break;
        }
    }

    puts("Adeus");
    return 0;
}
