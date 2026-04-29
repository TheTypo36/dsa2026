#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main(){
    ll n;
    cin >> n;

    if(n==0){
        cout << "NO";
        return 0;
    }
    string s = (n & (n-1)) == 0? "YES":"NO";

    cout << s << endl;

}