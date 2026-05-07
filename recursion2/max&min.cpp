#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
ll sum(vector<int> &arr, int n)
{
    if (n == 1)
    {
        return arr[0];
    }

    ll recur = sum(arr, n - 1);
    return recur + arr[n - 1];
}
int minSolve(vector<int> &arr, int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    int recurAns = minSolve(arr, n - 1);
    return min(arr[n - 1], recurAns);
}
int maxSolve(vector<int> &arr, int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    int recurAns = maxSolve(arr, n - 1);
    return max(recurAns, arr[n - 1]);
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
    // cout << minSolve(arr, n) << endl;
    // cout << maxSolve(arr, n) << endl;
    cout << sum(arr, n) << endl;
}