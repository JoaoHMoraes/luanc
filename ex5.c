#include <stdio.h>
#include <string.h>
#define MAX 5
//Não entendi o pq do n fiz diferente :/
typedef struct{
char nome[50];
int idade;
float nota;
} Aluno;

void imprimirAlunos(Aluno v[], int n) {
    printf("%s",turma[i]->nome);
    printf("%d",turma[i]->idade);
    printf("%f",turma[i]->nota);
}

float mediaNotas(Aluno v[], int n) {
    for(int i=0;i<MAX;i++){
        turma[i].nota;
    }
    printf("%lf",n/=MAX);

}

int main(void) {
    Aluno turma[MAX];
    float n;
    for(int i=0;i<MAX;i++){
        fgets(turma[i].nome, sizeof(turma[i].nome), stdin);
        scanf("%f",&turma[i].nota);
        scanf("%d",&turma[i].idade);
        getchar();
    }
    
    printf("")
    
    /* cadastre 3 alunos, chame as funcoes e mostre resultados */
    return 0;
}