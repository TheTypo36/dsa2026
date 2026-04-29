#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

ll nearestPower(ll n){
    ll nearest = 1;
    while(nearest <= n){
        nearest <<= 1;
    }
    nearest >>= 1;
    return nearest;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n ;
    if(n==0){
        cout << 0 << endl;
        return 0;
    }
    ll nearest = nearestPower(n);
    while(nearest >= 1){

        if(n-nearest >=0){

            n -= nearest;
            cout << nearest << " ";
        }
        nearest >>= 1;
    }

}