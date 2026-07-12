#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef  vector<ll> vll;

#define pb push_back;

int main()
{
    string s;
    cin >> s;
    int tamanho = s.size();
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            s.erase(s.begin() + i);
            break;
        }
    }
    if (s.size() == tamanho)
    {
        s.erase(s.begin());
    }
    cout << s;
    return 0;
}