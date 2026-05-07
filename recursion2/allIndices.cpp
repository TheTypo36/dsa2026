#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
vector<int> solve(vector<int> &arr, int n, ll x)
{
    if (n == 1)
    {
        if (arr[0] == x)
        {
            return {1};
        }
        else
        {
            return {};
        }
    }

    vector<int> recurAns = solve(arr, n - 1, x);
    if (arr[n - 1] == x)
    {
        recurAns.push_back(n);
    }
    return recurAns;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        arr[i] = input;
    }
    ll x;
    cin >> x;
    vector<int> ans = solve(arr, n, x);
    if (ans.size() == 0)
    {
        cout << -1 << endl;
    }
    else
    {

        for (auto &i : ans)
        {
            cout << i << " ";
        }
    }
}
