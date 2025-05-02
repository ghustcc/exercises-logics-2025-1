#include <stdio.h>

int main()
{
    int N, min;
    scanf("%d", &N);

    int vet[N];

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &vet[i]);
    }

    
    for (int i = 0; i <= N; i++)
    {
        min = vet[i];

        int j = i;
        while (vet[i] < min && j < N)
        {
            if (vet[i] < vet[j])
            {
                min = vet[j];
            }
            j++;
        }
    }

    return 0;
}