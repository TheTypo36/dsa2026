#include <bits/stdc++.h>
using namespace std;
vector<bool> sieve(1000001, true);
void buildSieve()
{
    sieve[0] = sieve[1] = false;
    for (int i = 2; i * i <= 1000000; i++)
    {
        for (int j = i * i; j <= 1000000; j += i)
        {
            sieve[j] = false;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    buildSieve();
    while (q--)
    {
        int n;
        cin >> n;
        cout << (sieve[n] ? "YES" : "NO") << endl;
    }
}