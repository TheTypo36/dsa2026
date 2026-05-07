#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

ll solve(ll x, ll n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return x;
    }

    ll ans = solve(x, n - 1);
    return ans * x;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x, n;
    cin >> x >> n;
    cout << solve(x, n) << endl;
}