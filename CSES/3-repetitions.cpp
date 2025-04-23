#include <bits/stdc++.h>

using namespace std;

int main()
{
    string DNA;
    int i = 0, maior = 1;
    cin >> DNA;

    while (i < DNA.size())
    {
        // ATTTCGAA
        int count = 1;
        int j = i + 1;
        key = DNA[i];
        while (j < DNA.size() && DNA[i] == DNA[j])
        {
            count++;
            j++;
        }
        count > maior ? maior = count : maior = maior;
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