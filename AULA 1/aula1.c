#include <stdio.h>

int main() {
    int num1;

    // Solicita ao usuário para inserir dois números
    printf("Digite o numero: \n");
    scanf("%d", &num1);

    // Compara os números e exibe o resultado
    if (num1 > 10) {
        printf("%d é maior que 10\n", num1);
    } else if (num1 < 10) {
        printf("%d é menor que 10\n", num1);
    } else {
        printf("%d é igual a 10\n", num1);
    }

    return 0;
}

