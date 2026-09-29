//1) Implemente um programa que leia o nome, a idade e o endereço de uma pessoa
//e armazene esses dados em uma estrutura. Em seguida, imprima os dados.

#include <stdio.h>

struct Pessoa{
    char nome[50];
    int idade;
    char endereco[100];
};

int main(){
    struct Pessoa pessoa;

    printf("Digite o nome: ");
    scanf(" %[^\n]", pessoa.nome);

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);

    printf("Digite o endereco: ");
    scanf(" %[^\n]", pessoa.endereco);

    printf("\nNome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Endereco: %s\n", pessoa.endereco);

    return 0;
}