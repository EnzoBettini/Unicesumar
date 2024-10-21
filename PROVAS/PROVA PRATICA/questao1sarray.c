#include <stdio.h>

int main() {
    char l1, l2, l3, l4, l5;
    char temp;

    // Receber as 5 letras
    printf("Digite 5 letras:\n");
    printf("Letra 1: ");
    scanf(" %c", &l1);
    printf("Letra 2: ");
    scanf(" %c", &l2);
    printf("Letra 3: ");
    scanf(" %c", &l3);
    printf("Letra 4: ");
    scanf(" %c", &l4);
    printf("Letra 5: ");
    scanf(" %c", &l5);

    if (l1 > l2) { temp = l1; l1 = l2; l2 = temp; }
    if (l1 > l3) { temp = l1; l1 = l3; l3 = temp; }
    if (l1 > l4) { temp = l1; l1 = l4; l4 = temp; }
    if (l1 > l5) { temp = l1; l1 = l5; l5 = temp; }

    if (l2 > l3) { temp = l2; l2 = l3; l3 = temp; }
    if (l2 > l4) { temp = l2; l2 = l4; l4 = temp; }
    if (l2 > l5) { temp = l2; l2 = l5; l5 = temp; }

    if (l3 > l4) { temp = l3; l3 = l4; l4 = temp; }
    if (l3 > l5) { temp = l3; l3 = l5; l5 = temp; }

    if (l4 > l5) { temp = l4; l4 = l5; l5 = temp; }

    printf("Letras em ordem lexicográfica:\n");
    printf("%c\n", l1);
    printf("%c\n", l2);
    printf("%c\n", l3);
    printf("%c\n", l4);
    printf("%c\n", l5);

    

    return 0;
}
