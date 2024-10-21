#include <stdio.h>


int main(){
double temp, tempf;
int selet;
printf("Digite a temperatura a ser convertida: \n");
scanf("%lf", &temp);

printf("Selecione a opção de conversão: \n 1 para celsius->farenheit\n 2 farenheit->celsius\n");
scanf("%d", &selet);


switch (selet){

case 1:
tempf = (temp/1.8) + 32;
printf("A temperatura %.0f Celsius, equivale a %.0f Farenheit!", temp, tempf);
break;


case 2:
tempf = (temp - 32) * 1.8;
printf("A temperatura %.0f Farenheit, equivale a %.0f Celsius!", temp, tempf);
break;
default:
printf("Opção inválida!");

}








    return 0;
}