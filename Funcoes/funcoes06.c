//Numero perfeito
#include <stdio.h>

int perfeito(int numero){
    int i;
    int soma;

    soma = 0;

    for(i = 1; i < numero; i++){
        if(numero % i == 0){
            soma = soma + i;
        }
    }

    if(soma == numero){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int numero;
    int resultado;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    resultado = perfeito(numero);

    printf("Resultado = %d", resultado);

    return 0;
}