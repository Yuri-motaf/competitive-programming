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
    while(n--){
        int x; cin >> x;
        
        int maior = 0;
        vi num(x);

        for(int i = 0; i < x; i++){
            cin >> num[i];
            if(num[i] > maior) maior = num[i];
        }

        cout << x * maior << endl;
    }
    return 0;
}