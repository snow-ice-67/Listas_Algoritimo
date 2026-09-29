//Serie com fatoriais
#include <stdio.h>

int fatorial(int numero){
    int i;
    int resultado;

    resultado = 1;

    for(i = 1; i <= numero; i++){
        resultado = resultado * i;
    }

    return resultado;
}

float serie(int n){
    int i;
    float soma;

    soma = 1;

    for(i = 1; i <= n; i++){
        soma = soma + 1.0 / fatorial(i);
    }

    return soma;
}

int main(){
    int n;
    float resultado;

    printf("Digite N: ");
    scanf("%d", &n);

    resultado = serie(n);

    printf("S = %.4f", resultado);

    return 0;
}