//Formula de Bhaskara
#include <stdio.h>
#include <math.h>

int verificaBhaskara(float a, float b, float c){
    float delta;

    delta = b * b - 4 * a * c;

    if(delta >= 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    float a;
    float b;
    float c;
    float delta;
    float x1;
    float x2;
    int resultado;

    printf("Digite A: ");
    scanf("%f", &a);

    printf("Digite B: ");
    scanf("%f", &b);

    printf("Digite C: ");
    scanf("%f", &c);

    resultado = verificaBhaskara(a, b, c);

    if(resultado == 1){
        delta = b * b - 4 * a * c;

        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("X1 = %.2f\n", x1);
        printf("X2 = %.2f", x2);
    }
    else{
        printf("Nao existem raizes reais.");
    }

    return 0;
}