#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef  vector<ll> vll;
typedef vector<int> vi;
 
#define pb push_back;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x ;
        cin >> x; 
        vi vec(x + 1);

        for(int i = 1; i <= x; i+=2){
            vec[i] = i + 1;
            vec[i+1] = i;
        }
        
        for(int i = 1; i <= x; i++){
            if (i == x) 
                cout << vec[i] << '\n';
            else 
                cout << vec[i] << ' '; 
        }
    }
    return 0;
}