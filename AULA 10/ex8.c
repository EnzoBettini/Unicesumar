#include <stdio.h>
#include <string.h>


int main(){

    char str[3][20]; 
    int  i, som =0;
    char cont[20];

    printf("Digite uma palavra para colocarmos no nosso array\n");
    for (i = 0; i < 3; i++) {
        scanf(" %s", str[i]);
    }

 

    printf("Digite a palavra para ver quantas vezes ela foi escrita\n");
    scanf(" %s", cont);


    for(i = 0; i<3; i++){
    
    if (strcmp(str[i], cont) == 0){
        som++;
    }

    }
    printf("A palavra %s foi escrita %d vezes\n", cont, som);
    


    return 0;
}