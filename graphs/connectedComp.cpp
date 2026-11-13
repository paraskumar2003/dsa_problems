#include <iostream>
#include <vector>
using namespace std;
class Solution
{
private:
    void checkDfs(int node, vector<int> &vis, vector<vector<int>> &adj)
    {

        vis[node] = 1;
        for (auto it : adj[node])
        {
            if(!vis[it]){
                checkDfs(it, vis, adj);
            }
        }
    }

public:
    int countComponents(int n, vector<vector<int>> &edges)
    {

        vector<int> vis(n, 0);
        vector<vector<int>> adj(n);
        int counter = 0;

        for (auto e : edges)
        {
            int u = e[0];
            int v = e[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                counter++;
                checkDfs(i, vis, adj);
            }
        }

        return counter;
    }
};