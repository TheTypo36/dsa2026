#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr, int n)
{
    if (n == 1)
    {
        cout << arr[0] << " ";
        return;
    }
    cout << arr[n - 1] << " ";
    solve(arr, n - 1);
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        arr[i] = input;
    }
    solve(arr, n);
}