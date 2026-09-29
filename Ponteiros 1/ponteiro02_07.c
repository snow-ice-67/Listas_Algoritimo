#include <stdio.h>

int verifica(char *texto, char *busca){
    char *letraTexto;
    char *letraBusca;

    while(*texto){
        letraTexto = texto;
        letraBusca = busca;

        while(*letraTexto == *letraBusca && *letraBusca){
            letraTexto++;
            letraBusca++;
        }

        if(*letraBusca == '\0')
            return 1;

        texto++;
    }

    return 0;
}

int main(){
    char texto[100];
    char busca[100];

    printf("Digite a primeira string: ");
    scanf("%s", texto);

    printf("Digite a segunda string: ");
    scanf("%s", busca);

    if(verifica(texto, busca))
        printf("A segunda string ocorre dentro da primeira.");
    else
        printf("A segunda string nao ocorre dentro da primeira.");

    return 0;
}