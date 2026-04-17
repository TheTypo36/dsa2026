#include <bits/stdc++.h>
using namespace std;

vector<int> countOfFact(int &n)
{
    vector<int> factors(n + 1, 0);

    for (int i = 2; i <= n; i++)
    {

        for (int j = i; j <= n; j+=i)
        {
            factors[j]++;
        }
    }
    return factors;
}
int main()
{

    int n;
    cin >> n;
    vector<int> ans = countOfFact(n);

    for (int i = 1; i <= n; i++)
    {
        cout << i << "  -> " << ans[i] << endl;
    }
}