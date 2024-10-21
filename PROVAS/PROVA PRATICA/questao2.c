#include <stdio.h>



int main () {
  
  int dia, mes, ano;

  printf("digite o dia\n");
  scanf("%d", &dia);
  printf("digite o mes\n");
  scanf(" %d", &mes);
  printf("digite o ano\n");
  scanf(" %d", &ano);
  if (ano<1900){printf("ano invalido/n");}

  printf("a sua data é: %d/%d/%d\n", dia, mes, ano);
    printf("ja se foram %d dias %d meses %d anos", dia-1, mes-1, ano-1900);





    return 0;
}