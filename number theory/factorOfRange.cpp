#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rangeFactor(int &n)
{

    vector<vector<int>> factors(n + 1);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            factors[i].push_back(j);
        }
    }

    return factors;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> ans = rangeFactor(n);
    for (auto &i : ans)
    {
        for (auto &j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}