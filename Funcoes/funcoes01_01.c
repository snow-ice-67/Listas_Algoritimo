//Volume da esfera
#include <stdio.h>

float volumeEsfera(float raio){
    float volume;
    volume = (4.0 / 3.0) * 3.14 * raio * raio * raio;
    return volume;
}

int main(){
    float raio;
    float resultado;

    printf("Digite o raio: ");
    scanf("%f", &raio);
    resultado = volumeEsfera(raio);

    printf("Volume = %.2f", resultado);
    return 0;
}