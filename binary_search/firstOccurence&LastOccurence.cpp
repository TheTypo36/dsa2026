#include <bits/stdc++.h>
using namespace std;
pair<int, int> firstAndLast(vector<int> &arr, int index, int n)
{

    int i = index;
    cout << "index found: " << index << endl;
    while (i < arr.size() && arr[i] == n)
    {
        i++;
    }
    int j = index;
    while (j >= 0 && arr[j] == n)
    {
        j--;
    }
    return make_pair(j + 2, i);
}
int bs_left(vector<int> &arr, int n)
{
    int left = 0, right = arr.size() - 1;
    int ans = -1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == n)
        {
            ans = mid;
            right = mid - 1;
        }
        else if (arr[mid] > n)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return ans;
}
int bs_right(vector<int> &arr, int n)
{
    int left = 0, right = arr.size() - 1;
    int ans = -1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == n)
        {
            ans = mid;
            left = mid + 1;
        }
        else if (arr[mid] > n)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return ans;
}
int main()
{

    int n, q;
    cin >> n >> q;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        arr[i] = input;
    }
    while (q--)
    {
        int x;
        cin >> x;
        int l = bs_left(arr, x);
        int r = bs_right(arr, x);
        if (l == -1)
        {
            cout << -1 << endl;
            continue;
        }
        // pair<int, int> ans = firstAndLast(arr, index, x);
        cout << l + 1 << " " << r + 1 << endl;
    }
}