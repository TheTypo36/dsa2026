    #include <bits/stdc++.h>
    using namespace std;
    // 0 1 2 3 4 5
    //
    long long int bs(vector<long long int> &arr, long long int n)
    {
        long long int left = 0, right = arr.size()-1;
        while (left <= right)
        {
            int mid = (left + right) / 2;

            if (arr[mid] == n)
            {
                return mid+1;
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
        return -1;
    }
    int main()
    {
        long long int n, q;
        cin >> n >> q;
        vector<long long int> arr;
        for (long long int i = 0; i < n; i++)
        {
            long long int input;
            cin >> input;
            arr.push_back(input);
        }
        sort(arr.begin(), arr.end());
        while (q--)
        {
            long long x;
            cin >> x;
            long long int index = bs(arr, x);
            cout << index << endl;
        }
    }
