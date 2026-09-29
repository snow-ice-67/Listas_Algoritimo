//1 Escreva um programa que contenha duas variaveis inteiras.
//Compare seus enderecos e exiba o maior endereco.

#include <stdio.h>
int main(){
    int primeira;
    int segunda;

    printf("Endereco da primeira: %p\n", &primeira);
    printf("Endereco da segunda: %p\n", &segunda);

    if(&primeira > &segunda){
        printf("A primeira variavel tem o maior endereco: %p\n", &primeira);
    }else{
        //5. Mostrar o maior
        printf("A segunda variavel tem o maior endereco: %p\n", &segunda);
    }

    return 0;
}