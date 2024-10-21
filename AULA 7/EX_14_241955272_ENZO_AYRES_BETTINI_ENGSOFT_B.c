#include <stdio.h>
void calcdisc(int qnt){

double porcent, valor, vf;

printf("Digite a porcentagem do desconto\n");
scanf("%lf", &porcent);

printf("Digite o valor dos livros\n");
scanf("%lf", &valor);


vf = qnt * (valor * (1-porcent/100));

printf("O valor total dessa categoria de livros é %.2f reais\n\n\n", vf);






}

int main (){


int qnt;
printf("Digite a quantidade de livros de romance a serem comprados\n");
scanf("%d", &qnt);

calcdisc(qnt);


printf("Digite a quantidade de livros de ação a serem comprados\n");
scanf("%d", &qnt);

calcdisc(qnt);


printf("Digite a quantidade de livros de ficção a serem comprados\n");
scanf("%d", &qnt);

calcdisc(qnt);








    return 0;
}