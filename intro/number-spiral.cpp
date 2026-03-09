#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;
    cin >> t;

    for (int test = 0; test < t; test++)
    {
        long long  i, j;
        cin >> i >> j;

        if (i == j)
        {
            cout << (i * i) - i + 1 << "\n";
        }
        else if (i < j)
        {
            if ((j & 1) == 1)
            {
                cout << (((j * j) - j + 1) + (j - i)) << "\n"; // this isnt math you cant just a different type of bracket when u want, use the same brackets to isolate calculations
            }
            else
            {
                cout << (((j * j) - j + 1) - (j - i)) << "\n";
            }
        }
        else
        {
            if ((i & 1) == 1)
            {
                cout << (((i * i) - i + 1) - (i - j)) << "\n"; // this isnt math you cant just a different type of bracket when u want, use the same brackets to isolate calculations
            }
            else
            {
                cout << (((i * i) - i + 1) + (i - j)) << "\n";
            }
        }
    }
    return 0;
}
