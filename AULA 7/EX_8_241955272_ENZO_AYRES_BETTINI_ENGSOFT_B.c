#include <stdio.h>



int main(){



double distancia, consumo, gasolina, custo;



printf("digite a distância em KM da sua viagem: \n");
scanf("%lf", &distancia);

printf("digite o consumo do carro em KM/L: \n");
scanf("%lf", &consumo);

printf("digite o valor da gasolina: \n");
scanf("%lf", &gasolina);


custo = (distancia/consumo) * gasolina;

printf("O custo total da viagem foi %.2f reais!", custo);


    return 0;
}