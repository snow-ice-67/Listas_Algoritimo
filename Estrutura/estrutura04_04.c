//4) Crie uma estrutura representando uma hora.
//Leia cinco horas e imprima a maior.

#include <stdio.h>

struct Hora{
    int hora;
    int minuto;
    int segundo;
};

int main(){
    struct Hora horas[5];
    struct Hora maior;

    for(int i = 0; i < 5; i++){
        printf("\nHora %d\n", i + 1);

        printf("Hora: ");
        scanf("%d", &horas[i].hora);

        printf("Minuto: ");
        scanf("%d", &horas[i].minuto);

        printf("Segundo: ");
        scanf("%d", &horas[i].segundo);
    }

    maior = horas[0];

    for(int i = 1; i < 5; i++){

        if(horas[i].hora > maior.hora){
            maior = horas[i];
        }
        else if(horas[i].hora == maior.hora &&
                horas[i].minuto > maior.minuto){
            maior = horas[i];
        }
        else if(horas[i].hora == maior.hora &&
                horas[i].minuto == maior.minuto &&
                horas[i].segundo > maior.segundo){
            maior = horas[i];
        }
    }

    printf("\nMaior hora: %02d:%02d:%02d\n",
           maior.hora, maior.minuto, maior.segundo);

    return 0;
}