#include <stdio.h>
#include <string.h>


int main(){

    char str[20]; 
    int tam, i;
    char rm, alt;

    printf("Digite uma palavra para trocarmos as letras\n");
    scanf(" %s", str);

    tam = strlen(str);

    printf("Digite a letra para removermos\n");
    scanf(" %c", &rm);

    printf("Digite a letra par colocar no lugar\n");
    scanf(" %c", &alt);

    for(i = 0; i<tam; i++){
    
    if (str[i] == rm){
        str[i] = alt;
    }

    }
    printf("A palavra com as letras trocadas fica\n %s", str);


    return 0;
}