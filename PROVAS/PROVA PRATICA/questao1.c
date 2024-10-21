#include <stdio.h>

int main() {
    char letras[5];
    char tempo;

    printf("Digite 5 letras:\n");
    for (int i = 0; i < 5; i++) {
        printf("Letra %d: ", i + 1);
        scanf(" %c", &letras[i]);  
    }

    for (int k = 0; k < 4; k++) 
    {
        for (int j = 0; j < 4 - k; j++) 
        {
            if (letras[j] > letras[j + 1]) 
            {
                tempo = letras[j];
                letras[j] = letras[j + 1];
                letras[j + 1] = tempo;
            }
        }
    }

    printf("Letras em ordem lexicográfica:\n");
    for (int y = 0; y < 5; y++) {
        printf("%c\n", letras[y]);
    }

    return 0;
}