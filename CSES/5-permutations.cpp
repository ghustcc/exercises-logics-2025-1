#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; 
    long long count = 0;
    cin >> n;

    vector<int> array(n);

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (array[i] < array[i - 1])
        {
            count += array[i - 1] - array[i];
            array[i] = array[i - 1];
        }
    }

    cout << count << endl;

    return 0;
}