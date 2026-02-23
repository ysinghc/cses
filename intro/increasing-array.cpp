#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long size;
    cin >> size;

    long long arr[size];

    for (long long i{0}; i < size; i++)
    {
        cin >> arr[i];
    }

    long long ans{0};

    for (long long j{1}; j < size; j++)
    {
        if (arr[j - 1] > arr[j])
        {
            ans += (arr[j - 1] - arr[j]);
            arr[j] = arr[j - 1];
        }
    }

    cout << ans << endl;
    return 0;
}