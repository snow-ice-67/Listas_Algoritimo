//5) Crie uma estrutura para armazenar o nome e a data
//de nascimento de uma pessoa.
//Leia seis pessoas e mostre a mais nova e a mais velha.

#include <stdio.h>

struct Data{
    int dia;
    int mes;
    int ano;
};

struct Pessoa{
    char nome[50];
    struct Data nascimento;
};

int main(){
    struct Pessoa pessoas[6];
    int mais_velha;
    int mais_nova;

    for(int i = 0; i < 6; i++){
        printf("\nPessoa %d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", pessoas[i].nome);

        printf("Dia de nascimento: ");
        scanf("%d", &pessoas[i].nascimento.dia);

        printf("Mes de nascimento: ");
        scanf("%d", &pessoas[i].nascimento.mes);

        printf("Ano de nascimento: ");
        scanf("%d", &pessoas[i].nascimento.ano);
    }

    mais_velha = 0;
    mais_nova = 0;

    for(int i = 1; i < 6; i++){

        if(pessoas[i].nascimento.ano < pessoas[mais_velha].nascimento.ano){
            mais_velha = i;
        }
        else if(pessoas[i].nascimento.ano == pessoas[mais_velha].nascimento.ano &&
                pessoas[i].nascimento.mes < pessoas[mais_velha].nascimento.mes){
            mais_velha = i;
        }
        else if(pessoas[i].nascimento.ano == pessoas[mais_velha].nascimento.ano &&
                pessoas[i].nascimento.mes == pessoas[mais_velha].nascimento.mes &&
                pessoas[i].nascimento.dia < pessoas[mais_velha].nascimento.dia){
            mais_velha = i;
        }

        if(pessoas[i].nascimento.ano > pessoas[mais_nova].nascimento.ano){
            mais_nova = i;
        }
        else if(pessoas[i].nascimento.ano == pessoas[mais_nova].nascimento.ano &&
                pessoas[i].nascimento.mes > pessoas[mais_nova].nascimento.mes){
            mais_nova = i;
        }
        else if(pessoas[i].nascimento.ano == pessoas[mais_nova].nascimento.ano &&
                pessoas[i].nascimento.mes == pessoas[mais_nova].nascimento.mes &&
                pessoas[i].nascimento.dia > pessoas[mais_nova].nascimento.dia){
            mais_nova = i;
        }
    }

    printf("\nPessoa mais velha: %s\n", pessoas[mais_velha].nome);
    printf("Pessoa mais nova: %s\n", pessoas[mais_nova].nome);

    return 0;
}