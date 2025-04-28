#include <stdio.h>

int main()
{
    int N;
    float soma = 0.0;
    scanf("%d", &N);

    float vet[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%f", &vet[i]);
        soma += vet[i];
    }

    float media = soma / N;

    for (int i = 0; i < N; i++)
    {
        if (vet[i] > media)
        {
            printf("%.2f ", vet[i]);
        }
    }

    return 0;
}