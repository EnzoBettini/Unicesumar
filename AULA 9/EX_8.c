#include <stdio.h>
//feito com while
int main() {

    int cont = 0;
    char parar;
    int num[50];      // array para as idades
    int i = 1;
    int soma = 0;
    int comp;

   while (cont != -1 || i == 10) 
   {

        printf("Numero ");
        scanf("%d", &num[i]);  

comp = num[i];
            if (comp % 2 !=0) 
            {  
                printf("numero é impar\n");
                soma = soma + num[i]; 
            } else printf("numero é par\n");
        
        if (i==10)
        {
            cont = -1;
        }
        i++;
    } 
    soma = soma/5;

    printf("a media dos numeros impares é %d\n", soma);



    return 0;
}