#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codMensagem;
    int indice;
    char letra;
}tLetra;

int main(void){
    FILE *fp;
    tLetra letra;
    char str[10][201];
    int ar[10] = {0};
    int i;

    fp = fopen("mensagens.dat", "rb");
    if (fp == NULL) { //verificar se conseguiu abrir
        return 1;
    }

    while(1){
        //ler uma letra com fread
        fread(&letra.codMensagem, sizeof(letra.codMensagem), 1, fp);
        fread(&letra.indice, sizeof(letra.indice), 1, fp);
        fread(&letra.letra, sizeof(letra.letra), 1, fp);
        //fread(endereco da variavel, tamanho do tipo da variavel, 1 unidade, fp);
        if (feof(fp) || ferror(fp)){
            break;
        }
        //fazer algo com a letra
        fseek(fp, 3, SEEK_CUR);

        if (letra.indice > ar[letra.codMensagem]){
            ar[letra.codMensagem] = letra.indice;
        }

       str[letra.codMensagem][letra.indice] = letra.letra;
    }
    fclose(fp); //nao esquecer
    //imprimir mensagens
    for (i = 0; i < 10; i++){
        str[i][ar[i]+1] = '\0';
    }

    //imprimir mensagens
    for (i = 0; i < 10; i++){
        printf("Frase %d: %s\n", i+1, str[i]);
    }
    return 0;
}
