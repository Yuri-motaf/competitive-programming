#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef  vector<ll> vll;
typedef vector<int> vi;

#define pb push_back;

void printSuperior(int n)
{
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < (n - i) * 2; j++) cout << " ";
        int estrelas = 2 * i - 1;
        for (int j = 0; j < estrelas; j++) {
            cout << "*";
            if (j < estrelas - 1) cout << " ";
        }
        cout << "\n";
    }
}

void printInferior(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < (i - 1) * 2; j++) cout << " ";
        int estrelas = 2 * (n - i) + 1;
        for(int j = 0; j < estrelas; j++){
            cout << "*";
            if (j < estrelas - 1) cout << " ";
        }
        cout << "\n";
    }
}

int main(){
    int n;
    char k;
    cin >> n >> k;

    if(k == 'S') 
    {
        printSuperior(n);
    } 
    else if (k == 'I') 
    {
        printInferior(n);
    }
    else if (k == 'T') 
    {
        printSuperior(n);
        printInferior(n);
    }

    return 0;
}