//7) Implemente um algoritmo de ordenacao simples para um vetor
//de inteiros usando ponteiros.

#include <stdio.h>

void swap(int *a, int *b){
    int auxiliar;

    auxiliar = *a;
    *a = *b;
    *b = auxiliar;
}

void ordenar(int *vetor, int tamanho){
    int *p;

    for(int i = 0; i < tamanho - 1; i++){

        p = vetor;

        for(int j = 0; j < tamanho - 1 - i; j++){

            if(*p > *(p + 1)){
                swap(p, p + 1);
            }

            p++;
        }
    }
}

int main(){
    int v[5] = {5, 2, 8, 1, 4};

    ordenar(v, 5);

    printf("Vetor ordenado:\n");

    for(int i = 0; i < 5; i++){
        printf("%d ", v[i]);
    }

    return 0;
}