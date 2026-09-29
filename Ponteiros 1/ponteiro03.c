//Crie um programa que contenha um array de float com
//10 elementos. Imprima o endereco de cada posicao desse array.

/*
1. Criar o array
2. Percorrer o array
3. Pegar o endereco de cada posicao
4. Imprimir os enderecos
*/

#include<stdio.h>

int main(){
    float v[10];

    for(int i = 0; i < 10; i++){
        printf("Endereco de v[%d]: %p\n", i, &v[i]);
    }

    return 0;
}