#include <stdio.h>
#include <string.h>

void input_clear() 
{
    // Clear the input buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *text, int size) 
{
    // Lê a entrada padrão até o tamanho máximo ou até encontrar um '\n'
    // Deve-se limpar a entrada padrão, pois o fgets() lê até o \n, apenas se houver uma quebra de linha antes, então o fgets() não vai ler nada.
    fgets(text, size, stdin);
    strtok(text, "\n"); // Remove the newline character from the string
}

int main() 
{
    char nome[50];
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu nome: ");
    input_clear(); // Clear the input buffer before using fgets -> it is not aways necessary.
    read_text(nome, sizeof(nome)); // Use the read_text function to read the name

    printf("\nNome: %s\n", nome);
    printf("Idade: %d anos\n", idade);

    for (int i = 0; i < strlen(nome); i++) {
        printf("%d: %c\n",i, nome[i]);
    }

    return 0;
}