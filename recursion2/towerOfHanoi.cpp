#include <bits/stdc++.h>
using namespace std;
void solve(int n, char src, char aux, char dest)
{
    if (n == 0)
        return;

    solve(n - 1, src, dest, aux);
    cout << "Move " << src << " to " << dest << endl;
    solve(n - 1, aux, src, dest);
}
int main()
{
    int n;
    cin >> n;
    solve(n, 'A', 'B', 'C');
}