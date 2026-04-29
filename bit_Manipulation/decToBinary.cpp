#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    if(n==0){
        cout << "0" << endl;
        return 0;

    } 
    string s ="";
    long long int i = 1;
    while(n!=0){
        if(n&i){
            s=s+'1';
        }else{
            s=s+'0';
        }
        n = n >> 1;
    }
    reverse(s.begin(),s.end());
    cout << s << endl;
}