#include <stdio.h>
#include <math.h>

int main()
{
    int X;
    double S = 0.0;
    int pot = 1;
    int fatorial = 1;

    scanf("%d", &X);

    for (int i = 1; i <= X; i++)
    {

        pot *= i;

        if (i % 2 == 0)
        {
            S += (double)X / (i + 1);
        }
        else
        {
            S -= (double)1 / (i + 1);
        }
    }

    return 0;
}