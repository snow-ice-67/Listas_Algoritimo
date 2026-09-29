//Criar um programa com um array de inteiros de 5 elementos.
// Usando somente aritmetica de ponteiros, ler o array do
// teclado e imprimir o dobro de cada valor.

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

    // Imprimir o dobro de cada valor
    for(int i = 0; i < 5; i++){
        printf("Dobro de %d: %d\n", *(p + i), *(p + i) * 2);
    }

    return 0;
}