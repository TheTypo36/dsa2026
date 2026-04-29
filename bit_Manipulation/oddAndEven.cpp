
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
ll checkOddOrEven(ll n){

    return (n&1);
}

int main(){
    ll n;
    cin >> n;
    if(checkOddOrEven(n)==0) 
        cout << "Even" << endl;
    else 
        cout << "Odd" << endl;
}