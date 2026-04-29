#include <bits/stdc++.h>
using namespace std;
int nearestPower(int n)
{
    int power = 0;
    int i = 1;
    while(power < n){
        power = 2 * i;
        i++;
    }
    power = power / 2; 
    return power;
 }
void solve(int n)
{

    int sum = 0;
    for (int i = n / 2; i >= 0; i--)
    {
        int k = pow(2, i);
        if (n - k >= 0)
        {
            n -= k;

            cout << k << " ";
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    solve(n);
}