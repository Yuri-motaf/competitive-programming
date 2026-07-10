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
    int d ; string n;
    
    while ((cin >> d >> n)){
            if(d == 0 && n == "0") break;
            char x = d + '0';
            string y;
            
            for(char c : n){
                if(c != x) y += c;
            }

            int i = 0;
            while(i + 1 < (int)y.size() && y[i] == '0') i+= 1;

            y = y.substr(i);
            if(y.empty()) y = "0";
            
            cout << y << endl;

    }
    return 0;
}