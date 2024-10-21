#include <stdio.h>

int main() {

    int num1, num2, num3, num4;
    char plr;
    float media;


    //PEDIR OS VALORES
    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: \n");
    scanf("%d", &num3);
    printf("Digite o quarto numero: \n ");
    scanf("%d", &num4);

    // calculo media
    while (getchar() != '\n');
    
    printf("Qual media voce quer calcular? A (Aritmetica), P (Ponderada), H (Harmonica) \n");
    scanf("%c", &plr);

    switch (plr) {
        case 'A':  // Média Aritmética
            media = (num1 + num2 + num3 + num4) / 4.0;
            printf("A média aritmética é: %f\n", media);
            break;
        case 'P':  // Média Ponderada (exemplo com pesos iguais)
            media = (num1 + num2 + num3 + num4) / 4.0;  // Para média ponderada, normalmente você usaria pesos diferentes
            printf("A média ponderada é: %f\n", media);
            break;
        case 'H':  // Média Harmônica
            if (num1 > 0 && num2 > 0 && num3 > 0 && num4 > 0) {
                media = 4.0 / ((1.0/num1) + (1.0/num2) + (1.0/num3) + (1.0/num4));
                printf("A média harmônica é: %f\n", media);
            } else {
                printf("Não é possível calcular a média harmônica com números não positivos.\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }
    return 0;
}