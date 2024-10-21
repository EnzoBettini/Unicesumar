#include <stdio.h>


int main(){


int pacote;
double pessoas, valor1, valor2, valor3;

printf("Digite o valor do pacote mais caro\n");
scanf("%lf", &valor1);

printf("Digite o valor do pacote com preco mediano\n");
scanf("%lf", &valor2);

printf("Digite o valor do pacote mais barato\n");
scanf("%lf", &valor3);


printf("Digite o numero de pessoas\n\n\n");
scanf("%lf", &pessoas);

printf("Escolha qual pacote voce quer \n 1 para mais caro \n 2 para mediano \n 3 para mais barato\n");
scanf("%d", &pacote);

switch(pacote){

case 1:
printf("O valor do pacote mais caro para %.0f pessoas é %.2f reais", pessoas, pessoas*valor1);
break;

case 2:
printf("O valor do pacote mediano para %.0f pessoas é %.2f reais", pessoas, pessoas*valor2);
break;

case 3:
printf("O valor do pacote mais barato para %.0f pessoas é %.2f reais", pessoas, pessoas*valor3);
break;

default:
printf("Opção inválida!\n");

}







    return 0;
}