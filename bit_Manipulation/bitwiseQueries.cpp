#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, q;
    cin >> n >> q;

    while(q--){
        ll type, place;
        cin >> type >> place;

        ll mask = 1LL << place;

        switch(type){
            case 1:
                cout << ((n & mask) ? "YES" : "NO") << "\n";
                break;

            case 2:
                n |= mask;
                cout << n << "\n";
                break;

            case 3:
                n &= ~mask;
                cout << n << "\n";
                break;

            case 4:
                n ^= mask;
                cout << n << "\n";
                break;
        }
    }
}