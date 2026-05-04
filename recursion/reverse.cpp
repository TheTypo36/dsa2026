#include <bits/stdc++.h>
using namespace std;

long long int solve(long long int n)
{
    if (n < 10)
    {
        return n;
    }

    int recurAns = solve(n / 10);
    int p = recurAns;
    int c = 1;
    while (p != 0)
    {
        c *= 10;
        p = p / 10;
    }
    int m = n % 10;
    m = m * c + recurAns;
    return m;
}
int main()
{
    long long int n;
    cin >> n;
    cout << solve(n) << endl;
}

// 123->12->1 1 2 * 10 + 1->21->