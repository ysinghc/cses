#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    long int n;
    cin >> n;
    long long target = (n*(n+1))/2;
    for(int i = 1 ; i < n ; i++)
    {
        int temp;
        cin >> temp;
        target -= temp;
    }
    cout << target << endl;
    return 0;
}