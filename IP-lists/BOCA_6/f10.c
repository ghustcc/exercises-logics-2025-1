#include <stdio.h>

int main() {

    int N, M, i, j, limiteN;
    
    scanf("%d %d", &N, &M);
    
    int matriz[N][M];

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++)
            scanf("%d", &matriz[i][j]);
    }
    limiteN = N;
    for (i = 0; i < limiteN; i++) {
        for (j = i; j < limiteN; j++) {
            if (i == 0) {
                printf("%d ", matriz[i][j]);
                if (j == limiteN - 1 && j > 0) {
                    printf("%d ", matriz[j][limiteN - 1]);
                    if (i == 0 && j == limiteN - 1 && j > 0)
                        printf("%d ", matriz[j][limiteN - 1]);
                }
            }
        }
        limiteN -= 1;
    }

    return 0;
}