#include <bits/stdc++.h>
using namespace std;

long long int solve_with_sliding_window(vector<long long int> &arr, long long int n, long long int k)
{
    long long int maxS = LLONG_MIN;
    long long int sum = 0;
    for (long long int i = 0; i < k; i++)
    {
        sum += arr[i];


    }
    maxS = max(maxS,sum);
    long long int j = 0;
    for(int i = k; i < n ;  i++){

        sum = (sum - arr[j]) +  arr[i];
        maxS = max(maxS,sum);
        j++;
    }
    return maxS;
}
long long int solve_with_presum_and_two_pointer(vector<long long int> &arr, long long int n, long long int k)
{
    vector<long long int> preSum(n, 0);
    long long int sum = 0;
    for (long long int i = 0; i < n; i++)
    {
        sum += arr[i];
        preSum[i] = sum;
    }
    long long int maxSum = LLONG_MIN;
    if (k == 0)
        return 0;
    long long int i = 0, j = k - 1;
    while (j < n)
    {
        long long int currSum = preSum[j] - (i > 0 ? preSum[i - 1] : 0);
        maxSum = max(currSum, maxSum);
        i++;
        j++;
    }
    return maxSum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n, k;
    cin >> n >> k;
    vector<long long int> arr(n, 0);

    for (long long int i = 0; i < n; i++)
    {
        long long int input;
        cin >> input;
        arr[i] = input;
    }
    cout << solve_with_sliding_window(arr, n, k) << endl;
}
