#include <bits/stdc++.h>

using namespace std;

int campo[50];
int resultado[50];

int main()
{
    int n, i;

    cin >> n;
    int campo[n];

    for (i = 0; i < n; i++)
    {
        cin >> campo[i]; // recebo os valores em todas as posições de 0 até n - 1
    }

    for (i = 0; i < n; i++)
    {
        if (i == 0) {
            cout << campo[i] + campo[i + 1] << " ";
            resultado[i] = campo[i] + campo[i + 1];
        } else if (i == n - 1) {
            cout << campo[i] + campo[i - 1] << " ";
            if (campo[i]) {
                resultado[i] = campo[i] + campo[i - 1];
            }
        } else {
            cout << campo[i] + campo[i + 1] + campo[i - 1] << " ";
            resultado[i] = campo[i] + campo[i + 1] + campo[i - 1];
        }
    }
}
