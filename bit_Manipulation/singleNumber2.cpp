#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n,0);
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;

    }
    int ans = 0;
    for(int i = 0; i < 60; i++){
        int sum = 0;
        int l = 1 << i;
        for(int j = 0; j < n; j++){
            if((arr[j] & l) == 0){
                sum += 0;
            }else{
                sum += 1;
            }
            // cout << arr[j] << " & " << l << " = " << (arr[j] & l) << " , so the sum " << sum << endl;
        }
        if(sum%3!=0){
            int mask = 1 << i;
            ans = ans | mask;
        }
    }
    cout << ans << endl;
    return 0;
}