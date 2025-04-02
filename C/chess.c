#include <stdio.h>

int main()
{
    char positions[8] = {'a','b','c','d','e','f','g','h'};
    int x, y;

    printf("Position x (1 at 8): "); scanf("%i", &x);
    printf("Position y (1 at 8): "); scanf("%i", &y);

    printf(" ");
    for (int pos = 0; pos < 8; pos++) {
        printf(" %c ", positions[pos]);
    }

    for (int i = 0; i < 8; i++) {
        printf("\n%i", (i+1));
        for (int j = 0; j < 8; j++) {
            if ((j+1) == x) {
                printf(" - ");
            } else if ((i+1) == y) {
                printf(" - ");
            } 
            else {
                printf(" # ");
            }
        }
    }

    return 0;
}