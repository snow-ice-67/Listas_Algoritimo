//8) Leia duas datas e calcule o numero de dias
//que decorreram entre elas.

#include <stdio.h>

struct Data{
    int dia;
    int mes;
    int ano;
};

int bissexto(int ano){
    if(ano % 400 == 0){
        return 1;
    }

    if(ano % 100 == 0){
        return 0;
    }

    if(ano % 4 == 0){
        return 1;
    }

    return 0;
}

int dias_ano(int ano){
    if(bissexto(ano)){
        return 366;
    }

    return 365;
}

int dias_data(struct Data data){
    int dias;
    int dias_mes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    dias = 0;

    for(int i = 1; i < data.ano; i++){
        dias = dias + dias_ano(i);
    }

    if(bissexto(data.ano)){
        dias_mes[1] = 29;
    }

    for(int i = 0; i < data.mes - 1; i++){
        dias = dias + dias_mes[i];
    }

    dias = dias + data.dia;

    return dias;
}

int main(){
    struct Data data1;
    struct Data data2;
    int dias1;
    int dias2;
    int resultado;

    printf("Digite a primeira data:\n");

    printf("Dia: ");
    scanf("%d", &data1.dia);

    printf("Mes: ");
    scanf("%d", &data1.mes);

    printf("Ano: ");
    scanf("%d", &data1.ano);

    printf("\nDigite a segunda data:\n");

    printf("Dia: ");
    scanf("%d", &data2.dia);

    printf("Mes: ");
    scanf("%d", &data2.mes);

    printf("Ano: ");
    scanf("%d", &data2.ano);

    dias1 = dias_data(data1);
    dias2 = dias_data(data2);

    resultado = dias1 - dias2;

    if(resultado < 0){
        resultado = resultado * -1;
    }

    printf("\nDias decorridos: %d\n", resultado);

    return 0;
}