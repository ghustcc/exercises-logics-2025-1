#include <stdio.h>
#include <math.h>

int main() 
{
    int X, Y, Z;
    
    scanf("%i %i %i", &X, &Y, &Z);

    if (X == Y == Z) {
        printf("Equilatero\n");
    } else if (X != Y == Z && X == Y != Z) {
        printf("Isosceles\n");
    } else if (X != Y != Z) {
        printf("Escaleno\n");
    } else if (X == 0 || Y == 0 || Z == 0) {
        printf("Nao e triangulo\n");
    } else if (X + Y < Z || X + Z < Y || Y + Z < X) {
        printf("Nao e triangulo\n");
    }
    return 0;
}