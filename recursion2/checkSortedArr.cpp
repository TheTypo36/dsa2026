#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

bool solve(vector<int> &arr, int n)
{
    if (n == 1)
    {
        return true;
    }

    bool ans = solve(arr, n - 1);
    if (!ans)
    {
        return ans;
    }

    return arr[n - 1] >= arr[n - 2];
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        arr[i] = input;
    }
    cout << ((solve(arr, n) == 1) ? "YES" : "NO") << endl;
    ;
}