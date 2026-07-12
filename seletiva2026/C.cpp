#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef  vector<ll> vll;

#define pb push_back

int main()
{
    string s;
    cin >> s;
    int t;
    cin >> t;
    vector<int> primeiro_do_par;
    vector<int> segundo_do_par;
    for (int i = 0; i < t; i++)
    {
        char a, b;
        cin >> a >> b;
        segundo_do_par.pb(b);
        primeiro_do_par.pb(a);

    }
    bool funciona = true;

    
    for (int i = 0; i < (int)s.size()-1; i++)
    {
        bool tem_par = false;
        
        for (int j = 0; j < t; j++)
        {
            if (tem_par)
                break;
            else if (s[i] == primeiro_do_par[j] && s[i+1] == segundo_do_par[j])
                tem_par = true;
        }
        if (!tem_par)
        {
            funciona = false;
            break;
        }
    }
    if (funciona)
        cout << "SIM" << endl;
    else
        cout << "NAO" << endl;
    return 0;
}