#include <stdio.h>
//feito com while

int main() {

    int cont = 0;
    char parar;
    char nome[50][50];  // max 50 strings 49 caracteres
    int idade[50];      // array para as idades
    char sexo[50][2];   // array para o sexo 1 vaga
    int i = 0;
    int soma = 0;

   while (cont != -1  || i == 49) {
        printf("Nome: ");
        scanf(" %49s", nome[i]); // %49s para limitar o tamanho da string armazenada
        printf("Idade: ");
        scanf("%d", &idade[i]);  
        printf("Sexo (M ou F): ");
        scanf(" %1s", sexo[i]);  

            if (sexo[i][0] == 'F') 
            {  
                soma = soma + idade[i]; 
            }

        printf("Deseja continuar (s/n)? ");
        scanf(" %c", &parar);

            if (parar == 'n') 
            {
                soma = soma/i;
                cont = -1;  
            }

        i++;
    } 

    printf("a media das idades somadas das mulheres são %d\n", soma);



    return 0;
}
//___________________________________________________________________________________________________________________________________________________________________________________________
/*

FEITO COM DO WHILE


#include <stdio.h>

int main() {

    int cont = 0;
    char parar;
    char nome[50][50];  // max 50 strings 49 caracteres
    int idade[50];      // array para as idades
    char sexo[50][2];   // array para o sexo 1 vaga
    int i = 0;
    int soma = 0;

    do {
        printf("Nome: ");
        scanf(" %49s", nome[i]); // %49s para limitar o tamanho da string armazenada
        printf("Idade: ");
        scanf("%d", &idade[i]);  
        printf("Sexo (M ou F): ");
        scanf(" %1s", sexo[i]);  

            if (sexo[i][0] == 'F') 
            {  
                soma = soma + idade[i]; 
            }

        printf("Deseja continuar (s/n)? ");
        scanf(" %c", &parar);

            if (parar == 'n') 
            {
                soma = soma/i;
                cont = -1;  
            }

        i++;
    } while (cont != -1  || i == 49);

    printf("a media das idades somadas das mulheres são %d\n", soma);

    return 0;
}




*/
//___________________________________________________________________________________________________________________________________________________________________________________________
/*
FEITO COM FOR

#include <stdio.h>

int main() {

    char parar;
    char nome[50][50];  // max 50 strings 49 caracteres
    int idade[50];      // array para as idades
    char sexo[50][2];   // array para o sexo 1 vaga
    int soma = 0;

   for (int i = 0; i<=49;) 
   {
        printf("Nome: ");
        scanf(" %49s", nome[i]); // %49s para limitar o tamanho da string armazenada
        printf("Idade: ");
        scanf("%d", &idade[i]);  
        printf("Sexo (M ou F): ");
        scanf(" %1s", sexo[i]);  

            if (sexo[i][0] == 'F') 
            {  
                soma = soma + idade[i]; 
            }

        printf("Deseja continuar (s/n)? ");
        scanf(" %c", &parar);

            if (parar == 'n') 
            {
                soma = soma/i;
                i = 50;  
            }

        i++;
    } 

    printf("a media das idades somadas das mulheres são %d\n", soma);

    return 0;
}

*/