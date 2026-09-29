//Criar um programa com um array de inteiros de 5 elementos.
// Ler o array e imprimir o endereco das posicoes
// que possuem valores pares.

#include <stdio.h>

int main(){
    int v[5];
    int *p;

    p = v;

    // Ler os 5 valores
    for(int i = 0; i < 5; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", p + i);
    }

    // Verificar quais valores sao pares
    for(int i = 0; i < 5; i++){
        if(*(p + i) % 2 == 0){
            printf("Endereco de %d: %p\n", *(p + i), (p + i));
        }
    }

    return 0;
}