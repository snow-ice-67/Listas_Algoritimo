//Tabuada de 1 ate N
#include <stdio.h>

int multiplicacao(int a, int b){
    int resultado;

    resultado = a * b;

    return resultado;
}

int main(){
    int n;
    int i;
    int resultado;

    printf("Digite N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        resultado = multiplicacao(i, n);

        printf("%d x %d = %d\n", i, n, resultado);
    }

    return 0;
}