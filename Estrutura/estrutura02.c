//2) Crie uma estrutura Retangulo contendo o ponto superior esquerdo
//e o ponto inferior direito. Cada ponto possui X e Y.
//Leia o retangulo e calcule area, diagonal e perimetro.

#include <stdio.h>
#include <math.h>

struct Ponto{
    float x;
    float y;
};

struct Retangulo{
    struct Ponto superior;
    struct Ponto inferior;
};

int main(){
    struct Retangulo retangulo;
    float largura;
    float altura;
    float area;
    float diagonal;
    float perimetro;

    printf("Digite o X do ponto superior esquerdo: ");
    scanf("%f", &retangulo.superior.x);

    printf("Digite o Y do ponto superior esquerdo: ");
    scanf("%f", &retangulo.superior.y);

    printf("Digite o X do ponto inferior direito: ");
    scanf("%f", &retangulo.inferior.x);

    printf("Digite o Y do ponto inferior direito: ");
    scanf("%f", &retangulo.inferior.y);

    largura = retangulo.inferior.x - retangulo.superior.x;
    altura = retangulo.superior.y - retangulo.inferior.y;

    area = largura * altura;
    perimetro = 2 * (largura + altura);
    diagonal = sqrt(largura * largura + altura * altura);

    printf("\nArea: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}