//4) Crie uma funcao que inverta a ordem dos elementos de um vetor.
//Nao utilize variaveis inteiras como indice.

#include <stdio.h>

void inverte_vetor(int *vetor, int tamanho){
    int *inicio;
    int *fim;
    int auxiliar;

    inicio = vetor;
    fim = vetor + tamanho - 1;

    while(inicio < fim){
        auxiliar = *inicio;
        *inicio = *fim;
        *fim = auxiliar;

        inicio++;
        fim--;
    }
}

int main(){
    int v[5] = {1, 2, 3, 4, 5};

    inverte_vetor(v, 5);

    printf("Vetor invertido:\n");

    for(int i = 0; i < 5; i++){
        printf("%d ", v[i]);
    }

    return 0;
}