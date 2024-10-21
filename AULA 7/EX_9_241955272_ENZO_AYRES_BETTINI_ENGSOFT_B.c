#include <stdio.h>

int main() {
    int valor;
    printf("Digite um número para analisar se é primo ou não\n");
    scanf("%d", &valor);

    if (valor < 2) {
        printf("Não é um número primo.\n");
    }
    else if (valor == 2 || valor == 3) {
        printf("É um número primo.\n");
    }
    else if (valor % 2 == 0 || valor % 3 == 0) {
        printf("Não é um número primo.\n");
    }
    else if (valor == 5 || valor == 7 || valor == 11 || valor == 13 || valor == 17 || valor == 19 || valor == 23 || valor == 29 || valor == 31 || valor == 37 || valor == 41 || valor == 43 || valor == 47 || valor == 53 || valor == 59 || valor == 61 || valor == 67 || valor == 71 || valor == 73 || valor == 79 || valor == 83 || valor == 89 || valor == 97) {
        printf("É um número primo.\n");
    } 
    else if (valor % 5 != 0 && valor % 7 != 0 && valor % 11 != 0 && valor % 13 != 0 && valor % 17 != 0 && valor % 19 != 0 && valor % 23 != 0 && valor % 29 != 0 && valor % 31 != 0 && valor % 37 != 0 && valor % 41 != 0 && valor % 43 != 0 && valor % 47 != 0 && valor % 53 != 0 && valor % 59 != 0 && valor % 61 != 0 && valor % 67 != 0 && valor % 71 != 0 && valor % 73 != 0 && valor % 79 != 0 && valor % 83 != 0 && valor % 89 != 0 && valor % 97 != 0) {
        printf("É um número primo.\n");
    } else {
        printf("Não é um número primo.\n");
    }

    return 0;
}
