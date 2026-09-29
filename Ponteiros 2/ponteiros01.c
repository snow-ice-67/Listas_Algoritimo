#include <stdio.h>

 void calcular_esfera(float raio, float *area, float *volume){

    *area = 4.0 * 3.14 * (raio * raio);
    *volume =  (4.0/3.03) * 3.14 * (raio * raio * raio);

 }

 int main(){
    float raio, area, volume;

    printf("Escreva o valor do raio: \n");
    scanf("%f", &raio);

    calcular_esfera(raio, &area, &volume);

    printf("Valor da Area: %.2f\n", area);
    printf("Valor do Volume: %.2f\n", volume);

    return 0;
 }