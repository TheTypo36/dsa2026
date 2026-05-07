#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;
    vector<vector<int>> adjMatrix(nodes + 1, vector<int>(nodes + 1, 0));
    for (int i = 0; i < edges; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        adjMatrix[v1][v2] = adjMatrix[v2][v1] = 1;
    }
}