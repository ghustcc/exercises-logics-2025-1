#include <stdio.h>
#include <string.h>

int main () {

    int i, j;
    char palavras[3][20];

    for (i = 0; i < 3; i++) {
        fgets(palavras[i], 20, stdin);
    }

    printf("%d", strlen(palavras[0]));
    printf("%d", strlen(palavras[1]));
    printf("%d", strlen(palavras[2]));

    for (i = 0; i < 3; i++) {
        for (j = 0; j < strlen(palavras[i]) / 2; j++) {
            char temp = palavras[i][j];
            palavras[i][j] = palavras[i][strlen(palavras[i]) - j - 2];
            palavras[i][strlen(palavras[i]) - j - 2] = temp;
        } 
    }

    for (i = 0; i < 3; i++) {
        printf("%s \n", palavras[i]);
    }

    return 0;
}