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

    fp = fopen("notas.txt", "r");
    if (fp == NULL){
        printf("Erro ao abrir o arquivo de dados.\n");
        return;
    }

    while(1){
        fscanf(fp, "%d%*c", &discente[qAlunos].matricula);

        if (feof(fp))
                break;

        fgets(str, 101, fp);
        RemoveBarraN(str);
        strcpy(discente[qAlunos].nome, str);
        fscanf(fp, "%lf %lf %lf %lf %f%*c", &discente[qAlunos].nota1, &discente[qAlunos].nota2, &discente[qAlunos].nota3, &discente[qAlunos].recover, &media[qAlunos]);
        qAlunos++;
    }

    if (fclose(fp) == 0){
        printf("Dados carregados com sucesso.\n");
    }
}

void SalvaDados(){
    int i;
    FILE *fp;

    fp = fopen("notas.txt", "w");
    if (fp == NULL){
        printf("Erro ao criar o arquivo de dados.\n");
        return;
    }
    for(i = 0; i < qAlunos; i++){
        fprintf(fp, "%d\n%s\n%lf %lf %lf %lf %lf\n", discente[i].matricula, discente[i].nome, discente[i].nota1, discente[i].nota2, discente[i].nota3, discente[i].recover, media[i]);
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

    for(i = 0; i < n; i++){
        media[qAlunos+i] = Media(discente[qAlunos+i].nota1, discente[qAlunos+i].nota2, discente[qAlunos+i].nota3);
        if(media[qAlunos+i] < 7 && media[qAlunos+i] >= 4){
            printf("Digite a nota da recuperacao do Aluno -> %s de media %.1f: ", discente[qAlunos+i].nome, media[qAlunos+i]);
            scanf("%lf", &discente[qAlunos+i].recover);

            media[qAlunos+i] = MediaFinal(media[qAlunos+i], discente[qAlunos+i].recover);
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
