//Calculadora
#include <stdio.h>

float calculadora(float n1, float n2, char operador){
    if(operador == '+'){
        return n1 + n2;
    }
    else if(operador == '-'){
        return n1 - n2;
    }
    else if(operador == '*'){
        return n1 * n2;
    }
    else{
        return n1 / n2;
    }
}

int main(){
    float n1;
    float n2;
    float resultado;
    char operador;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operador);

    resultado = calculadora(n1, n2, operador);

    printf("Resultado = %.2f", resultado);

    return 0;
}