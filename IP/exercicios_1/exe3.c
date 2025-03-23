#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,d,e,x;

    printf("Number a: ");
    scanf("%f", &a);
    printf("Number b: ");
    scanf("%f", &b);
    printf("Number c: ");
    scanf("%f", &c);
    printf("Number d: ");
    scanf("%f", &d);
    printf("Number e: ");
    scanf("%f", &e);

    x = (pow(a, 3)) * ((b+c)/d + e);

    printf("x = %.2f", x);
    return 0;
}