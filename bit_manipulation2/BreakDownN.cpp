#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;

    int i = 1;
    while (i < n)
    {
        i = i << 1;
    }
    i = i / 2;
    while (n > 0 && i > 2)
    {
        n -= i;
        cout << i << " ";
        i = i / 2;
    }
}