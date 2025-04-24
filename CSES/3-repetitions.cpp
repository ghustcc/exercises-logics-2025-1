#include <bits/stdc++.h>

using namespace std;

int main()
{
    string DNA;
    int i = 0, maior = 1, count = 1;
    cin >> DNA;

    while (i < DNA.size())
    {
        int j = i + 1;
        while (j < DNA.size() && DNA[i] == DNA[j])
        {
            count++;
            j++;
        }
        count > maior ? maior = count : count = 1;
        i = j;
    }

    cout << maior << endl;

    return 0;
}

// int cont = 1;
//         for (int j = i + 1; j < DNA.size(); j++) {
//             if (DNA[i] == DNA[j]) {
//                 cont++;
//             } else {
//                 break;
//             }
//         }
//         if (cont > maior) {
//             maior = cont;
//         }