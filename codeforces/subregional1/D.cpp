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
    vll ta(n);
    vll tb(n);

    ll y;
    for(int i = 0; i < n; i++){
        cin >> ta[i]; 
    }
    for(int i = 0; i < n; i++){
        cin >> tb[i]; 
    }

    vll c(n);
    for(int i = 0;i < n;i++){
        c[i] = ta[i] - tb[i];
    }

    sort(c.begin(), c.end());

    ll good = 0;
    int ini = 0, fim = n - 1;

    while (ini < fim){
        if(c[ini] + c[fim] > 0){
            good += (fim - ini);
            fim -= 1;
        }else{
            ini += 1;
        }
    }
    // for(int j  = 1 ; j < n; j++){
    //     for(int i = 0; i < n; i++){
    //         if(i >= j) break;
    //         if((ta[i] + ta[j]) > (tb[i] + tb[j])){
    //         good += 1;
    //         }
    //     }
    // }
    cout << good << endl;
    return 0;
}
