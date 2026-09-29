//6) Escreva uma funcao que procure a ocorrencia de um vetor menor
//dentro de um vetor maior.

#include <stdio.h>

int* busca_subvetor(int *vetor, int tam_v, int *sub, int tam_s){
    int *inicio;
    int *p;
    int *p_sub;
    int encontrou;

    inicio = vetor;

    while(inicio <= vetor + tam_v - tam_s){
        p = inicio;
        p_sub = sub;
        encontrou = 1;

        while(p_sub < sub + tam_s){
            if(*p != *p_sub){
                encontrou = 0;
                break;
            }

            p++;
            p_sub++;
        }

        if(encontrou == 1){
            return inicio;
        }

        inicio++;
    }

    return NULL;
}

int main(){
    int vetor[7] = {1, 4, 7, 2, 8, 9, 3};
    int sub[3] = {7, 2, 8};
    int *resultado;

    resultado = busca_subvetor(vetor, 7, sub, 3);

    if(resultado != NULL){
        printf("Subvetor encontrado.\n");
        printf("Primeiro endereco da ocorrencia: %p\n", resultado);
        printf("Primeiro valor encontrado: %d\n", *resultado);
    }else{
        printf("Subvetor nao encontrado.\n");
    }

    return 0;
}