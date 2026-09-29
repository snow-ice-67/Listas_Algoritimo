//Escreva um programa que contenha duas variaveis inteiras.
//Leia essas variaveis do teclado. Em seguida, compare seus
//enderecos e exiba o conteudo do maior endereco.

//descobrir qual variavel esta no maior endereco e depois
// mostrar o conteudo daquela variavel.

#include <stdio.h>

int main(){
    int primeira;
    int segunda;

    printf("Digite o primeiro valor: ");
    scanf("%d", &primeira);

    printf("Digite o segundo valor: ");
    scanf("%d", &segunda);

    if(&primeira > &segunda){
        printf("Conteudo do maior endereco: %d\n", primeira);
    }else{
        printf("Conteudo do maior endereco: %d\n", segunda);
    }

    return 0;
}