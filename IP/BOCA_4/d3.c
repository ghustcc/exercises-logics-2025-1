#include <stdio.h>

// --- Protótipos ---
int isPrimo(int number);


// --- Main ---
int main()
{
    int number;
    printf(""); scanf("%d", &number);

    isPrimo(number) == 0 ? printf("PRIMO") : printf("NAO PRIMO");


    return 0;
}

// --- Funções ---
int isPrimo(int number)
{
    double primo = 0;
    for (int i = 2; i < number; i++)
    {
        number % i == 0 ? primo = 1 : primo;
    }
    return primo;
}