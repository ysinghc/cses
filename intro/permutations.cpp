#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    if(n == 1)
    {
        cout << "1" << "\n";
        return 0;
    }
    if(n == 2 || n == 3)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    int arr[n];
    for(int i = 1; i <= n/2; i++)
    {
        arr[i] = i*2;
    }
    int rem = n-(n/2);

    for(int i = 0 ; i < rem ; i++)
    {
        arr[i+1+n/2] = 2*i+1; 
    }
    for(int i = 1 ; i <= n ; i+=1)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";

    return 0;
}