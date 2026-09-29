//Crie um programa que contenha uma matriz de float com tres
//linhas e tres colunas. Imprima o endereco de cada posicao
// dessa matriz.

/*
1. Criar a matriz
2. Percorrer as linhas
3. Percorrer as colunas
4. Pegar o endereco de cada posicao
5. Imprimir os enderecos
*/


#include <stdio.h>

int main(){
    float m[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){

            printf("Endereco de m[ %d ][ %d ] e: %p", i, j, &m[i][j]);

        }
    }

    return 0;
}