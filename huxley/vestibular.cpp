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
    vector <char> resp(n);
    vector <char> gab(n);
    int c = 0;
    for(int i = 0; i < n; i++){
        cin >> gab[i];
    }
    for(int i = 0; i < n; i++){
        cin >> resp[i];
        if(gab[i] == resp[i]) c += 1;
    }

    cout << c << endl;
    return 0;
}
