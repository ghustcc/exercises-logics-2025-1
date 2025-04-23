#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int x;
    scanf("%d", &n);

    int numbers[n-1];

    for (int i = 0; i <= n-2; i++) {
        scanf("%d", &x);
        numbers[i] = x;
    }

    for (int i = 0; i <= n-2; i++) {
        if ((i+1) != numbers[i]) {
            printf("%d\n", (i+1));
            break;
        }
    } 

    return 0;
}