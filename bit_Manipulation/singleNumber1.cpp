#include <bits/stdc++.h>
using namespace std;
using ll = long long int;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    ll n;
    cin >> n;
    vector<ll> arr(n,0);
    for(ll i = 0; i < n; i++){
        ll input;
        cin >> input;
        arr[i] = input;
    }
    ll a = arr[0];
    for(ll i = 1; i < n;i++){
        a ^= arr[i];
    }
    
    cout << a << endl;
    


}