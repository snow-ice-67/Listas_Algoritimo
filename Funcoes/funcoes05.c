//Idade em dias
#include <stdio.h>

int idade(int anos, int meses, int dias){
    int total;

    total = anos * 365;
    total = total + meses * 30;
    total = total + dias;

    return total;
}

int main(){
    int anos;
    int meses;
    int dias;
    int resultado;

    printf("Digite os anos: ");
    scanf("%d", &anos);

    printf("Digite os meses: ");
    scanf("%d", &meses);

    printf("Digite os dias: ");
    scanf("%d", &dias);

    resultado = idade(anos, meses, dias);

    printf("Idade em dias = %d", resultado);

    return 0;
}