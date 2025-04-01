#include <stdio.h>
#include <math.h>

int main() 
{
    float a, b, c;
    
    scanf("%f %f %f", &a, &b, &c);

    float delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Nao ha raizes reais\n");
    } else if (a == 0) {
        printf("Nao e equacao do segundo grau\n");
    } 
    else {
        float r1 = (-b + sqrt(delta)) / (2 * a);
        float r2 = (-b - sqrt(delta)) / (2 * a);
        printf("%.5f %.5f\n", r1, r2);
    }
    return 0;
}