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

int main(){   
    int d ; ll n;
    
    while ((cin >> d >> n) && (d != 0 && n != 0)){
            char x = d + '0';
            cout << "valor de x(char de d): " << x << endl;
            string y; y = to_string(n);
            cout << "valor de y(string de n): " << y << endl;
            y.erase(remove(y.begin(), y.end(), x), y.end());

            cout << "tam : " << y.length() << endl;
            if(y.length() == 0) y = '0';
            cout << "resposta: " << y << endl;
            
    }
    return 0;
}