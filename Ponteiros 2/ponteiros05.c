//5) Crie uma funcao que varra um vetor de inteiros uma unica vez
//e retorne tres informacoes: minimo, maximo e media.

#include <stdio.h>

void extrair_estatisticas(int *vetor, int tamanho, int *min, int *max, float *media){
    int soma;
    int *p;

    soma = 0;
    p = vetor;

    *min = *p;
    *max = *p;

    for(int i = 0; i < tamanho; i++){
        if(*p < *min){
            *min = *p;
        }

        if(*p > *max){
            *max = *p;
        }

        soma = soma + *p;

        p++;
    }

    *media = (float)soma / tamanho;
}

int main(){
    int v[5];
    int minimo;
    int maximo;
    float media;

    for(int i = 0; i < 5; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    extrair_estatisticas(v, 5, &minimo, &maximo, &media);

    printf("Menor valor: %d\n", minimo);
    printf("Maior valor: %d\n", maximo);
    printf("Media: %.2f\n", media);

    return 0;
}