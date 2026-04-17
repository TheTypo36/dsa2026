#include <bits/stdc++.h>
using namespace std;

void primeFacOrderN(int n)
{
    for (int i = 2; i <= n; i++)
    {

        if (n % i == 0)
        {

            while (n % i == 0)
            {
                cout << i << " ";
                n = n / i;
            }
        }
    }
}
void primeFacRootN(int n)
{

    for (int i = 2; i * i <= n; i++)
    {

        if (n % i == 0)
        {

            while (n % i == 0)
            {
                cout << i << " ";
                n = n / i;
            }
        }
    }
}
// O(logn)
void primeFactSpf(int &n)
{
    vector<int> arr(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (arr[i] == i)
        {

            for (int j = i * i; j <= n; j += i)
            {
                arr[j] = min(arr[j], i);
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        int j = i;
        cout << "prime factor of " << i << " :";
        while (j > 1)
        {
            cout << arr[j] << " ";
            j = j / arr[j];
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;

    primeFacOrderN(n);
    cout << endl;
    primeFacRootN(n);
    cout << endl;
    primeFactSpf(n);
}