//Somatorio de 1 ate N
#include <stdio.h>

int somatorio(int n){
    int i;
    int soma;

    soma = 0;

    for(i = 1; i <= n; i++){
        soma = soma + i;
    }

    return soma;
}

int main(){
    int n;
    int resultado;

    printf("Digite N: ");
    scanf("%d", &n);

    resultado = somatorio(n);

    printf("Somatorio = %d", resultado);

    return 0;
}