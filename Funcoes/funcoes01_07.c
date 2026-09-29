//Media de valores positivos
#include <stdio.h>

float media(){
    float numero;
    float soma;
    int quantidade;

    soma = 0;
    quantidade = 0;

    printf("Digite um valor positivo (0 para terminar): ");
    scanf("%f", &numero);

    while(numero > 0){
        soma = soma + numero;
        quantidade++;

        scanf("%f", &numero);
    }

    if(quantidade > 0){
        return soma / quantidade;
    }
    else{
        return 0;
    }
}

int main(){
    float resultado;
    resultado = media();

    printf("Media = %.2f", resultado);

    return 0;
}