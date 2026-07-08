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
    for(int i = 0;i < n; i++){
        int y; cin >> y;
        int c;

        if(y == 1) c = 0;
        else if(y == 2) c = 1;
        else if((y % 2 == 0) || y == 3) c = 2;
        else if(y % 2 != 0) c = 3;
        
        cout << c << endl;
    }
    return 0;
}