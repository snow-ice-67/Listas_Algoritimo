//3) Declare uma matriz int matriz[3][3] e preencha-a com valores de 1 a 9.
//Utilizando apenas um ponteiro simples e aritmetica de ponteiros,
//calcule a soma da diagonal principal.

#include <stdio.h>

int main(){
    int matriz[3][3];
    int *ptr;
    int soma;

    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;

    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;

    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;

    ptr = &matriz[0][0];
    soma = 0;

    for(int i = 0; i < 3; i++){
        soma = soma + *ptr;
        ptr = ptr + 4;
    }

    printf("Soma da diagonal principal: %d\n", soma);

    return 0;
}