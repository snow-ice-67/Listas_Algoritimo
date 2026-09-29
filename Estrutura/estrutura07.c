//7) Leia cinco atletas e exiba os atletas por ordem de idade,
//do mais velho para o mais novo.

#include <stdio.h>

struct Atleta{
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
};

int main(){
    struct Atleta atletas[5];
    struct Atleta auxiliar;

    for(int i = 0; i < 5; i++){
        printf("\nAtleta %d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", atletas[i].nome);

        printf("Esporte: ");
        scanf(" %[^\n]", atletas[i].esporte);

        printf("Idade: ");
        scanf("%d", &atletas[i].idade);

        printf("Altura: ");
        scanf("%f", &atletas[i].altura);
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4 - i; j++){

            if(atletas[j].idade < atletas[j + 1].idade){

                auxiliar = atletas[j];
                atletas[j] = atletas[j + 1];
                atletas[j + 1] = auxiliar;
            }
        }
    }

    printf("\nAtletas do mais velho para o mais novo:\n");

    for(int i = 0; i < 5; i++){
        printf("%s - %d anos\n", atletas[i].nome, atletas[i].idade);
    }

    return 0;
}