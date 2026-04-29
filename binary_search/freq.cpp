#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        arr[i] = input;
    }
    sort(arr.begin(), arr.end());
    while (q--)
    {
        int x;
        cin >> x;

        int u = upper_bound(arr.begin(), arr.end(), x) - arr.begin();
        int l = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
        // cout << "****************************" << endl;
        cout << abs(l - u) << endl;
    }
}