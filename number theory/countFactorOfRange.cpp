#include <bits/stdc++.h>
using namespace std;

vector<int> countOfFact2(int n)
{
    vector<int> factor(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            factor[j]++;
        }
    }
    return factor;
}
vector<int> countOfFact(int &n)
{
    vector<int> factors(n + 1, 0);

    for (int i = 2; i <= n; i++)
    {

        for (int j = i; j <= n; j += i)
        {
            factors[j]++;
        }
    }
    return factors;
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    vector<int> ans = countOfFact2(1000000);
    while (q--)
    {
        int n;
        cin >> n;
        cout << ans[n] << endl;
    }
}