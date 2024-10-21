#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5, var;

    // Solicita ao usuário para inserir cinco números
    printf("Digite o numero 1: \n");
    scanf("%d", &num1);
    var = num1;

    printf("Digite o numero 2: \n");
    scanf("%d", &num2);
    if (num2 > var) {
        var = num2;
    }

    printf("Digite o numero 3: \n");
    scanf("%d", &num3);
    if (num3 > var) {
        var = num3;
    }

    printf("Digite o numero 4: \n");
    scanf("%d", &num4);
    if (num4 > var) {
        var = num4;
    }

    printf("Digite o numero 5: \n");
    scanf("%d", &num5);
    if (num5 > var) {
        var = num5;
    }

    printf("%d é o maior numero!\n", var);

    return 0;
}
