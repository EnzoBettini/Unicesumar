#include <stdio.h>

int main (){

char nome[32], nome1[32];
    printf("digite seu primeiro nome\n");
    scanf("%31s", nome);
    printf("digite seu sobrenome\n");
    scanf("%31s", nome1);
printf("seu nome completo é: %s %s\n", nome, nome1);
    


    return 0;
}