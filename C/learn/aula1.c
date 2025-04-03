#include <stdio.h>
#include <string.h>

void input_clear() 
{
    // Clear the input buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void read_text(char *text, int size) 
{
    // Read a line of text from the standard input
    // deve-se limpar a entrada padrão, pois o fgets() lê até o \n, apenas se houver uma quebra de linha antes ,então o fgets() não vai ler nada.
    fgets(text, size, stdin);
    strtok(text, "\n"); // Remove the newline character from the string
}

int add(int a, int b) 
{
    return a + b;
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
    printf("Sizeof: %d\n", sizeof(nome));
    printf("Function: %d\n",  add(1, 2));

    return 0;
}