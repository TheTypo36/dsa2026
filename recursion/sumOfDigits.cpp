#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

ll solve(ll n)
{
    if (n < 10)
    {
        return n;
    }
    ll s = solve(n / 10);
    ll myans = s + n % 10;

    return myans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    cout << solve(n) << endl;
}