#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;

    int count = 0;
    while(n!=0){
        count++;
        n = n & n-1;
    }
    cout << count << endl;
}