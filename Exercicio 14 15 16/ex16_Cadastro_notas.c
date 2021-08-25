#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUNOS 30

typedef struct {
    int matricula;
    char nome[40];
    double nota1;
    double nota2;
    double nota3;
    double recover;
}tDiscente;

tDiscente discente[MAX_ALUNOS];
char disciplina[50];
int qAlunos=0, n;
float media[MAX_ALUNOS];

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

void CarregaDados(){
    FILE *fp;
    char str[101];
    int q;

    fp = fopen("notas.bin", "rb");
    if (fp == NULL){
        printf("Erro ao abrir o arquivo de dados.\n");
        return;
    }

    while(qAlunos < MAX_ALUNOS){
        q = fread(&discente[qAlunos], sizeof(discente[0]), MAX_ALUNOS - qAlunos, fp);
        printf("foram lidos %d discentes.\n", q);
        qAlunos += q;

        if (feof(fp))
            break;
    }

    if (fclose(fp) == 0){
        printf("Dados carregados com sucesso.\n");
    }
}

void SalvaDados(){
    int i, t;
    FILE *fp;

    fp = fopen("notas.bin", "wb");
    if (fp == NULL){
        printf("Erro ao criar o arquivo de dados.\n");
        return;
    }

    t = 0;
    while(t < qAlunos){
        i = fwrite(&discente[t], sizeof(discente[0]), qAlunos - t, fp);
        t += i;
    }

    if (fclose(fp) == 0){
        printf("Dados salvos com sucesso.\n");
    }
}


void RegistraAluno(){
    int i;

    printf("Digite o nome da disciplina: ");
    fgets(disciplina, 50, stdin);
    RemoveBarraN(disciplina);

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);

    if (n + qAlunos >= MAX_ALUNOS){
        puts("Capacidade de armazenamento cheia.");
        return;
    }

    for(i = 0; i < n; i++){
        printf("\nDigite a Matricula do Aluno %d: ", qAlunos+1+i);
        scanf("%d%*c", &discente[qAlunos+i].matricula);

        printf("Digite o nome do Aluno %d: ", qAlunos+i+1);
        fgets(discente[qAlunos+i].nome, 40, stdin);
        RemoveBarraN(discente[qAlunos+i].nome);
    }
}


double Media(double v1, double v2, double v3){
    return (v1 + v2 + v3) / 3;
}

double MediaFinal(double v1, double v2){
    return ((v1 * 6) + (v2 * 4)) / 10;
}

void RegistraNotas(){
    int i;

    for(i = 0; i < n; i++){
        printf("\nDigite a Nota 1 do Aluno -> %s: ", discente[qAlunos+i].nome);
        scanf("%lf%*c", &discente[qAlunos+i].nota1);

        printf("Digite a Nota 2 do Aluno -> %s: ", discente[qAlunos+i].nome);
        scanf("%lf%*c", &discente[qAlunos+i].nota2);

        printf("Digite a Nota 3 do Aluno -> %s: ", discente[qAlunos+i].nome);
        scanf("%lf%*c", &discente[qAlunos+i].nota3);
    }

    for(i = 0; i < qAlunos; i++){
        media[i] = Media(discente[i].nota1, discente[i].nota2, discente[i].nota3);
        if(media[i] < 7 && media[i] >= 4){
            printf("Digite a nota da recuperacao do Aluno -> %s de media %.1f: ", discente[i].nome, media[i]);
            scanf("%lf", &discente[i].recover);

            media[i] = MediaFinal(media[i], discente[i].recover);
        }
    }

    qAlunos += n;
}

void Relatorio(){
    int i;
    char situacao1[] = "Aprovado";
    char situacao2[] = "Reprovado";

    printf("\n-------------------------------------------------------------------------------------------------------------------\n");
    printf("Nome da disciplina: %s\n", disciplina);
    printf(" Matricula\tNome\t\t\tNota 1\tNota 2\tNota 3\tRec\tMedia\tSituacao\n");
    printf("---------------------------------------------------------------------------------------------------------------------\n");

    for(i = 0; i < qAlunos; i++){
        printf(" %05d\t\t%s\t\t\t%.1lf\t%.1lf\t%.1lf\t%.1f\t%.1lf\t%s\n", discente[i].matricula, discente[i].nome,
                discente[i].nota1, discente[i].nota2, discente[i].nota3, discente[i].recover, media[i], media[i] < 5 ? situacao2 : situacao1);
    }

    printf("---------------------------------------------------------------------------------------------------------------------\n");
}

int main(){
    CarregaDados();
    Relatorio();
    RegistraAluno();
    RegistraNotas();
    SalvaDados();
    Relatorio();

return 0;
}
