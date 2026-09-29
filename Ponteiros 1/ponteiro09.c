/*9) Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize
índices para percorrer o vetor, apenas aritmética de ponteiros.*/

#include <stdio.h>

void mostrarvetor (int *p){
    for(int i = 0; i < 10; i++){
        printf("[ %d ]\n", *p++);
    }
}

int main(){
    int v[10] = {1,2,3,4,5,6,7,8,9,10};

    mostrarvetor(v);

    return 0;
}