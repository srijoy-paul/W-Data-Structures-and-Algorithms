#include <iostream>
using namespace std;
int main()
{
    int n, m; // n is the number of vertices and m is the number of edges
    cin >> n >> m;
    int adj[n + 1][n + 1];
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
}