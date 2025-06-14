#include <stdio.h> 
#define MAXN 100000

int main ()
{
    int N, sum = 0, i, j, aux;
    int vet[MAXN];

    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &vet[i]);
        j = i;
        aux = 0;
        while (vet[j] == 0 && j > -1) {
            aux++;
            j--;
        }
        if (vet[i] == 0 && i - aux >= 0)
            sum -= vet[i - aux];
        else 
            sum += vet[i];
        for (j = 0; j < i; j++) {
            printf("-%d ", vet[j]);
        }
    }

    printf("\n%d\n", sum);

    return 0;
}