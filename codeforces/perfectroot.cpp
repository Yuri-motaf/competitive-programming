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
    while (x--)
    {
        int y; cin >> y;
        for (int i = 1; i <= y; ++i) {
        cout << i << (i == y ? "" : " ");
        }
        cout << "\n";
    }
    return 0;
}