/*8) Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo do
vetor. A função deverá preencher os elementos do vetor com esse valor. Não utilize
índices para percorrer o vetor, apenas aritmética de ponteiros.*/

#include <stdio.h>

void botavetor(int *p, int valor) {
    int *parada = p + 10;

    for (; p < parada; p++) {
        *p = valor;
        printf("Este e o valor do vetor: %d\n", *p);
    }
}

int main() {
    int valor;
    int v[10];

    printf("Digite o valor: ");
    scanf("%d", &valor);

    botavetor(v, valor);

    return 0;
}
