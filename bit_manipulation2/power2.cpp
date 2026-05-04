#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;

    ll i = 1;
    while (i <= n)
    {
        cout << i << " ";
        i = i << 1;
    }
}