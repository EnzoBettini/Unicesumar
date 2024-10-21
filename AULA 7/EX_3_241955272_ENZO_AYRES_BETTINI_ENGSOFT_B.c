#include <stdio.h>

int main () {

float salario, sf;
char cod;


printf ("digite o salario\n");
scanf("%f", &salario);


printf ("digite a avaliacao ( A B C )\n");
scanf(" %c", &cod);

switch(cod){

    case 'A':
    sf = salario*1.15;
    printf("salario com bonus de 15%% é %.2f\n", sf);
    break;

    case 'B':
    sf = salario*1.10;
    printf("salario com bonus de 10%% é %.2f\n", sf);
    break;

    case 'C':
    sf = salario*1.05;
    printf("salario com bonus de 5%% é %.2f\n", sf);
    break;

default:
printf("avaliacao invalida\n");
}





    return 0;
}