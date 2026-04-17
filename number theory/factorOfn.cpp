#include <bits/stdc++.h>
using namespace std;

void factor(int &n){

    int i = 1;
    while(i*i<=n){
        if(n%i==0){
            cout << i << " ";
        }
        i++;
    }
    i--;
    while(i>=1){
        if(n%i==0){
            int f1 = i;
            int f2 = n/i;
            if(i!=n/i){
                cout << n/i << " ";
            }
        }
        i--;
    }
    cout << endl;
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    factor(n);
}