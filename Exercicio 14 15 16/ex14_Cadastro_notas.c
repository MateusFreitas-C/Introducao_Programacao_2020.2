#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int matricula;
    char nome[40];
    double nota1;
    double nota2;
    double nota3;
    double recover;
}tDiscente;

tDiscente discente[30];
char disciplina[50];
int qAlunos;

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

void RegistraAluno(){
    int i;

    for(i = 0; i < qAlunos; i++){
        printf("\nDigite a Matricula do Aluno %d: ", i+1);
        scanf("%d%*c", &discente[i].matricula);
 
        printf("Digite o nome do Aluno %d: ", i+1);
        fgets(discente[i].nome, 40, stdin);
        RemoveBarraN(discente[i].nome);
    }   
}

void RegistraNotas(){
    int i;

    for(i = 0; i < qAlunos; i++){
        printf("\nDigite a Nota 1 do Aluno -> %s: ", discente[i].nome);
        scanf("%lf%*c", &discente[i].nota1);

        printf("Digite a Nota 2 do Aluno -> %s: ", discente[i].nome);
        scanf("%lf%*c", &discente[i].nota2);

        printf("Digite a Nota 3 do Aluno -> %s: ", discente[i].nome);
        scanf("%lf%*c", &discente[i].nota3);
    }
}

double Media(double v1, double v2, double v3){
    return (v1 + v2 + v3) / 3;
}

double MediaFinal(double v1, double v2){
    return ((v1 * 6) + (v2 * 4)) / 10;
}

void Relatorio(float media[], int qAlunos){
    int i;
    char situacao1[] = "Aprovado";
    char situacao2[] = "Reprovado";
    
    printf("\n----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("Nome da disciplina: %s\n", disciplina);
    printf(" Matricula\tNome\t\t\tNota 1\tNota 2\tNota 3\tRec\tMedia\tSituacao\n");
    printf("----------------------------------------------------------------------------------------------------------------------------------------\n");

    for(i = 0; i < qAlunos; i++){
        printf(" %05d\t\t%s\t\t\t%.1lf\t%.1lf\t%.1lf\t%.1f\t%.1lf\t%s\n", discente[i].matricula, discente[i].nome,
                discente[i].nota1, discente[i].nota2, discente[i].nota3, discente[i].recover, media[i], media[i] < 5 ? situacao2 : situacao1);
    }

    printf("----------------------------------------------------------------------------------------------------------------------------------------\n");
}


int main(){
    int i;
    float media[30];

    printf("Digite o nome da disciplina: ");
    fgets(disciplina, 50, stdin);
    RemoveBarraN(disciplina);

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qAlunos);

    RegistraAluno();
    RegistraNotas();

    for(i = 0; i < qAlunos; i++){
        media[i] = Media(discente[i].nota1, discente[i].nota2, discente[i].nota3);
        if(media[i] < 7 && media[i] >= 4){
            printf("Digite a nota da recuperacao do Aluno -> %s de media %.1f: ", discente[i].nome, media[i]);
            scanf("%lf", &discente[i].recover);

            media[i] = MediaFinal(media[i], discente[i].recover);
        }        
    }

    Relatorio(media, qAlunos);


return 0;
}