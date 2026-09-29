//Tipo de triangulo
#include <stdio.h>

char tipoTriangulo(float x, float y, float z){
    if(x < y + z && y < x + z && z < x + y){
        if(x == y && y == z){
            return 'E';
        }
        else if(x == y || x == z || y == z){
            return 'I';
        }
        else{
            return 'S';
        }
    }
    else{
        return 'N';
    }
}

int main(){
    float x;
    float y;
    float z;
    char resultado;

    printf("Digite X: ");
    scanf("%f", &x);

    printf("Digite Y: ");
    scanf("%f", &y);

    printf("Digite Z: ");
    scanf("%f", &z);

    resultado = tipoTriangulo(x, y, z);

    if(resultado == 'E'){
        printf("Triangulo Equilatero");
    }
    else if(resultado == 'I'){
        printf("Triangulo Isosceles");
    }
    else if(resultado == 'S'){
        printf("Triangulo Escaleno");
    }
    else{
        printf("Nao forma um triangulo");
    }

    return 0;
}