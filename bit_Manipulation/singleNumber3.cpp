#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> arr(n,0);
    for(ll i = 0; i < n;i++){
        int input;
        cin >> input;
        arr[i] = input;
    }
    int a = arr[0];
    for(int i = 1; i < n; i++){
        a ^=arr[i];
    }
    // cout << "here" << endl;
    int r = 1;
    while((a&r)==0){
        r = r << 1;
        // cout << " r " << r<<endl;
    }

    int c= 0, d = 0;
    
    for(int i = 0; i < n; i++){
        if((arr[i] & r)==0){
            c^=arr[i];
        }else{
            d^=arr[i];
        }
    }
    cout << min(c,d) << " " << max(c,d)<<endl;

    return 0;
}