#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m; // n is the number of vertices and m is the number of edges
    cin >> n >> m;
    vector<int> adj[n + 1]; // array of vectors
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}