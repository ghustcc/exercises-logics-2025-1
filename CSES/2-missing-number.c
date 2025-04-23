#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;
    int x;

    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &x);
        actual_sum += x;
    }

    printf("%d\n", expected_sum - actual_sum);

    return 0;
}
