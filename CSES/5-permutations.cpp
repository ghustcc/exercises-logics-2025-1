#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i = 0, number_par = 1, number_impar = 1;

    cin >> n;

    vector<int> array(n);

    while (i < n)
    {
        if (n % 2 == 0) {
            array[i] = number_par;
            array[i + 1] = number_par + (n/2);
            number_par++;
            i += 2;
        } else {
            if (i == n/2 && n/2 % 2 == 0) {
                array[n/2] = n;
                i = n/2 + 1;
            } else if (i == n/2 - 1 ) {
                array[i] = number_impar;
                array[n/2] = n;
                array[i + 2] = number_impar + ((n - 1)/2);
                number_impar++;
                i += 3; 
            } else {
                array[i] = number_impar;
                array[i + 1] = number_impar + ((n - 1)/2);
                number_impar++;
                i += 2;
            }
        }
    }

    if (n != 2 && n != 3 && n != 4) {
        for (int i = 0; i < n; i++)
        {
            cout << array[i] << " ";
        }
    } else if (n == 4) {
        cout << "2 4 1 3" << endl;
    } else {
        cout << "NO SOLUTION" << endl;
    }

    return 0;
}