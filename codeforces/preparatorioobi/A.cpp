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
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        ll c = 0;
        
        ll x , y; 
        cin >> x >> y;
        
        ll r = x % y;
        if(r == 0) c = 0;
        else c = y - r;
         
        cout << c << endl;
    }
    return 0;
}
