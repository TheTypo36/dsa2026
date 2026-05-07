#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr, int i, int n)
{
    if (n - i == 1)
    {
        cout << arr[i] << " ";
        return;
    }
    cout << arr[i] << " ";
    solve(arr, i + 1, n);
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
    solve(arr, 0, n);
}