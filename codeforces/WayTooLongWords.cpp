#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;

#define pb push_back
#define mp make_pair
#define fi first
#define se second

int main()
{
    int x; cin >> x;
    while(x--){
        string y;cin >> y;

        if(y.length() > 10){
            // cout << y.length() << endl;
        

            int fim = y.length() - 1;

            cout << y[0] << y.length() - 2 << y[fim] << endl;

            // cout << y[fim] << endl;
        }
        else
            cout << y << endl;
        
    }
    return 0;
}