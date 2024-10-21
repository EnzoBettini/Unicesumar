//Nao consegui fazer funcionar professor

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char fra[50], pa[50][50];
    int  cont =0, j=0, k=0;

    printf("Digite uma frase \n");
    scanf(" %s", fra);

 

    for(int i = 0; fra[i] != '\0'; i++) 
    {

        if (isspace(fra[i])) {
            pa[cont][j] = '\0'; 
            cont++;
            j = 0; 
        } 
        else 
        {
            pa[cont][j++] = fra[i]; 
        }
    }
    
   
    for (int k = 0; k < cont; k++) {
        printf("%s\n", pa[k]);
    }

    return 0;
}