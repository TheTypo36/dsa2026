#include <bits/stdc++.h>
using namespace std;

vector<int> factorsCount(int n)
{
    vector<int> fc(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            fc[j]++;
        }
    }
    return fc;
}
void optimisedButNotSieve(int n)
{
    vector<int> fc = factorsCount(n);
    for (int i = 2; i <= n; i++)
    {
        if (fc[i] == 2)
        {
            cout << i << " ";
        }
    }
}
void sieveOfEra(int n)
{
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        for (int j = i * i; j <= n; j += i)
        {
            sieve[j] = false;
        }
    }
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (sieve[i])
        {
            cout << i << " ";
            count++;
        }
    }
    cout << endl;
    cout << count << endl;
}
void SieveOfEratothenes(int n)

{
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (sieve[i])
        {

            for (int j = i * i; j <= n; j += i)
            {

                sieve[j] = false;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (sieve[i])
            cout << i << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    sieveOfEra(n);
}