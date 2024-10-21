#include <stdio.h>

int main() {
    int ano;    

     printf("digite o ano o qual voce quer analisar");
    scanf("%d", &ano);

    if (ano%4==0){
      printf("ano bissexto");
    }
    else{
    printf("não é bissexto");
    }
    return 0;
}