//2) Escreva uma função que receba um vetor de inteiros, seu tamanho e um número X.
//A função deve buscar X no vetor e retornar um ponteiro para a primeira posição
//de memória onde X foi encontrado.

#include <stdio.h>

int* procurar(int *vetor, int tamanho, int x){
    int *p;

    p = vetor;

    for(int i = 0; i < tamanho; i++){
        if(*p == x){
            return p;
        }

        p++;
    }

    return NULL;
}

int main(){
    int v[5];
    int x;
    int *resultado;

    for(int i = 0; i < 5; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Digite o valor que deseja procurar: ");
    scanf("%d", &x);

    resultado = procurar(v, 5, x);

    if(resultado != NULL){
        printf("Valor encontrado: %d\n", *resultado);
        printf("Endereco: %p\n", resultado);
    }else{
        printf("Valor nao encontrado.\n");
    }

    return 0;
}