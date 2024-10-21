#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){

    char str[20]; 
    int  i, tam;

    printf("Digite uma palavra para colocarmos em letra maiuscula\n");
    scanf(" %s", str);

    tam = strlen(str);

    for(i=0; i<tam; i++){
       str[i] = toupper(str[i]);
    }

    printf("Sua string com as letras maiusculas fica %s\n", str);
 

    
    


    return 0;
}