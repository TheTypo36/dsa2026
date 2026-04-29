#include <bits/stdc++.h>
using namespace std;

void buildSieve(vector<bool> &sieve, int n)
{
    sieve[0] = sieve[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        for (int j = i * i; j <= n; j += i)
        {
            if (sieve[j])
            {
                sieve[j] = false;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<bool> sieve(n + 1, true);
    buildSieve(sieve, n);
    vector<int> preSum(n + 1, 0);
    int count = 0;
    for (int i = 0; i <= n; i++)
    {

        if (sieve[i])
        {
            count++;
        }
        preSum[i] = count;
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int ans = preSum[r] - (l > 0 ? preSum[l - 1] : 0);
        cout << ans << "\n";
    }
}