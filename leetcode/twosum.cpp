#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "digite o tamanho do array: " << endl;
    int x; cin >> x;

    vector <int> arr(x);
    for(int i = 0; i < x; i++){
        cin >> arr[i];
    }

    cout << "digite a soma target: " << endl;
    int target; cin >> target;
    bool achou = false;

    int ini = 0, fim = x - 1;

    sort(arr.begin(), arr.end());

    for(int i = 0;i < x; i++){
        if(fim == ini){
            break;
        }
        int soma_atual = arr[ini] + arr[fim];
        if( soma_atual == target){
            achou = true;
            break;
        }
        else if(soma_atual < target){
            ini += 1;
        }else if(soma_atual > target){
            fim -= 1;
        }
    }

    if(achou)
        cout << "achado o target com os numeros " << arr[ini] << " e " << arr[fim] << endl;
    else 
        cout << "não achado o target";


    return 0;
}