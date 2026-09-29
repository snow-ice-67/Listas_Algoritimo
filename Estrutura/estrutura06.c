//6) Crie uma estrutura representando um atleta.
//Leia cinco atletas e mostre o mais alto e o mais velho.

#include <stdio.h>

struct Atleta{
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
};

int main(){
    struct Atleta atletas[5];
    int mais_alto;
    int mais_velho;

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

    mais_alto = 0;
    mais_velho = 0;

    for(int i = 1; i < 5; i++){

        if(atletas[i].altura > atletas[mais_alto].altura){
            mais_alto = i;
        }

        if(atletas[i].idade > atletas[mais_velho].idade){
            mais_velho = i;
        }
    }

    printf("\nAtleta mais alto: %s\n", atletas[mais_alto].nome);
    printf("Atleta mais velho: %s\n", atletas[mais_velho].nome);

    return 0;
}