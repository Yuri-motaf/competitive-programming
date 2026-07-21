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
    int cgeral = 0;
    while(x--){
        int y , w, z; 
        cin >> y >> w >> z;
        int c = 0;
        y == 1? c+= 1 : c += 0;
        w == 1? c+= 1 : c += 0;
        z == 1? c+= 1 : c += 0;

        if(c >= 2) cgeral += 1;
    }

    cout << cgeral << endl;

    return 0;
}
