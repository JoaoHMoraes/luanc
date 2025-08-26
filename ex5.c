#include <stdio.h>
#include <string.h>
#define MAX 5

typedef struct{
    char nome[50];
    int idade;
    float nota;
} Aluno;

void imprimirAlunos(Aluno turma[]) {
    for(int i = 0; i < MAX; i++){
        printf("%s",turma[i].nome);
        printf("%d",turma[i].idade);
        printf("%f",turma[i].nota);
    }
}

float mediaNotas(Aluno v[], int *n) {
    for(int i=0;i<MAX;i++){
        *n += turma[i].nota;
    }

    n =/ MAX;

    return *n;
}

int main(void) {
    Aluno turma[MAX];
    float media;

    for(int i=0;i<MAX;i++){
        fgets(turma[i].nome, sizeof(turma[i].nome), stdin);
        scanf("%f",&turma[i].nota);
        scanf("%d",&turma[i].idade);
        getchar();
    }
    
    media = mediaNotas(turma, &media);

    imprimirAlunos(turma);
    
    return 0;
}