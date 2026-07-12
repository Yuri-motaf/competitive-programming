#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef  vector<ll> vll;

#define pb push_back;

int main()
{
    ll n, x;
    cin >> n >> x;
    vll index;
    int funcionais = 0;
    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        if (x%num == 0 && num != 0)
        {
            index.push_back(i);
            funcionais++;
        }
    }
    cout << funcionais << endl;
    for (int i = 0; i < (int)index.size(); i++)
    {
        cout << index[i] << " ";
    }
    return 0;
}