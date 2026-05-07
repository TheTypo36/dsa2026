#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

ll solve(vector<ll> &arr, ll n, ll x)
{
    if (n == 1)
    {
        if (arr[0] == x)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }

    if (arr[n - 1] == x)
    {
        return n;
    }
    return solve(arr, n - 1, x);
}

int main()
{
    ll n;
    cin >> n;

    vector<ll> arr(n, 0);
    for (ll i = 0; i < n; i++)
    {
        ll input;
        cin >> input;
        arr[i] = input;
    }
    ll x;
    cin >> x;
    cout << solve(arr, n, x) << endl;
}