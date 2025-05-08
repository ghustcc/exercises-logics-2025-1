#include <stdio.h>

int main()
{
    int N, k, i, j, repeticao = 0, cont;
    scanf("%d", &N);

    int vet[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &vet[i]);
    }

    for (j = 0; j < N; j++) {
        cont = 0;
        int vet_numbers[N];
        for (k = 0; k < N; k++) {
            if (vet[j] == vet[k]) {
                cont++;
            }
        }
        if (cont == 1)
            repeticao++;
    }

    printf("%d ", repeticao);
    
    return 0;
}