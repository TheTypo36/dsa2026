#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        arr[i] = input;
    }
    unordered_map<int, int> m;
    int distinct = 0;
    for (int i = 0; i < k; i++)
    {
        if (m[arr[i]] == 0)
        {
            distinct++;
        }
        m[arr[i]]++;
    }
    cout << distinct << " ";
    int j = 0;
    for (int i = k; i < n; i++)
    {
        if (m[arr[i]] == 0)
        {
            distinct++;
        }
        m[arr[i]]++;
        m[arr[j]]--;
        if (m[arr[j]] == 0)
        {
            distinct--;
        }
        cout << distinct << " ";
        j++;
    }
}