#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long expected_sum = (long long)n * (n + 1) / 2;
    long long actual_sum = 0;
    int x;

    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &x);
        actual_sum += x;
    }

    printf("%lld\n", expected_sum - actual_sum);

    return 0;
}
