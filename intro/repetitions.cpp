#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string dna;
    cin >> dna;
    
    auto front = dna.begin();
    auto rear = dna.begin();
    
    int ans = 0;
    int temp = 0;
    
    while (rear < dna.end())
    {
        if(*rear == *front)
        {
            temp++;
            ans = max(ans, temp);
        }
        else{
            temp = 1;
            front = rear;
        }
        rear++;
    }
    cout << ans << endl;
    return 0;
}