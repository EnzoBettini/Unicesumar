#include <stdio.h>
#include <string.h>


int main(){
    char str[20];  
    int tam, i;
    char temp;

    printf("Digite uma palavra para invertermos\n");
    scanf(" %s", str);


   tam = strlen(str);

  
    for(i = 0; i < tam / 2; i++){
        temp = str[i];  
        str[i] = str[tam - 1 - i];  
        str[tam- 1 - i] = temp;  
    }

    printf("Palavra invertida: %s\n", str);  

    return 0;
}