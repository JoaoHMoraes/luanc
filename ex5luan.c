#include <stdio.h>
#include <string.h>
#define MAX 5

typedef struct{
    char nome[50];
    int idade;
    float nota;
} Aluno;

void imprimirAlunos(Aluno turma[], int n) {
    for(int i = 0; i < n; i++){
        printf("%s",turma[i].nome);
        printf("%d\n",turma[i].idade);
        printf("%.1f\n\n",turma[i].nota);
    }
}

float mediaNotas(Aluno turma[], int n) {
    int avg = 0;
    
    for(int i=0;i<MAX;i++){
        avg += turma[i].nota;
    }

    avg /= n;

    return avg;
}

int main(void) {
    Aluno turma[MAX];
    float media = 0;
    int n;
    
    printf("Digite quantos alunos voce deseja cadastrar:\n");
    
    scanf("%d", &n);
    getchar();

    for(int i=0;i<n;i++){
        fgets(turma[i].nome, sizeof(turma[i].nome), stdin);
        scanf("%f",&turma[i].nota);
        scanf("%d",&turma[i].idade);
        getchar();
    }
    
    media = mediaNotas(turma, n);
    
    imprimirAlunos(turma, n);
    
    printf("media e: %.2f\n", media);
    
    return 0;
}