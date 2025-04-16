#include <stdio.h>
#include <string.h>

int main() 
{
    int n;
    scanf("%d", &n);
    
    int numbers[n-1];
    if (n >= 2 && n <= 2*10*10*10*10*10) 
    {
        for (int i = 0; i <= n-2; i++) {
            scanf("%d", &numbers[i]);
        }

        for (int i = 0; i <= n-2; i++) {
            if (numbers[i] != (i+1)) {
                printf("%d\n", (i+1));
                break;
            }
        } 
    }

    return 0;
}