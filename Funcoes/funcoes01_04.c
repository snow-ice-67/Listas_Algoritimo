//Conversao de tempo
#include <stdio.h>

int calculaHoras(int tempo){
    int horas;

    horas = tempo / 3600;

    return horas;
}

int calculaMinutos(int tempo){
    int minutos;

    tempo = tempo % 3600;
    minutos = tempo / 60;

    return minutos;
}

int calculaSegundos(int tempo){
    int segundos;

    segundos = tempo % 60;

    return segundos;
}

int main(){
    int tempo;
    int horas;
    int minutos;
    int segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempo);

    horas = calculaHoras(tempo);
    minutos = calculaMinutos(tempo);
    segundos = calculaSegundos(tempo);

    printf("%d horas, %d minutos e %d segundos", horas, minutos, segundos);

    return 0;
}