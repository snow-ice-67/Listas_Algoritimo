//3) Crie uma estrutura representando um aluno.
//Leia os dados de cinco alunos e mostre o aluno com a maior media.

#include <stdio.h>

struct Aluno{
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
};

int main(){
    struct Aluno alunos[5];
    float media;
    float maior;
    int posicao;

    for(int i = 0; i < 5; i++){
        printf("\nAluno %d\n", i + 1);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);

        printf("Nota 3: ");
        scanf("%f", &alunos[i].nota3);
    }

    maior = (alunos[0].nota1 + alunos[0].nota2 + alunos[0].nota3) / 3;
    posicao = 0;

    for(int i = 1; i < 5; i++){
        media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;

        if(media > maior){
            maior = media;
            posicao = i;
        }
    }

    printf("\nAluno com maior media:\n");
    printf("Nome: %s\n", alunos[posicao].nome);
    printf("Notas: %.2f, %.2f, %.2f\n",
           alunos[posicao].nota1,
           alunos[posicao].nota2,
           alunos[posicao].nota3);

    return 0;
}