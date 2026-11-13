#include <iostream>
#include <vector>
using namespace std;
class Solution
{
private:
    bool checkDfs(int node, int parent, vector<int> &vis, vector<vector<int>> &adj)
    {
        vis[node] = 1;

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                if (checkDfs(it, node, vis, adj) == true)
                    return true;
            }
            else
            {
                if (it != parent)
                {
                    return true;
                }
            }
        }

        return false;
    }

public:
    bool validTree(int n, vector<vector<int>> &edges)
    {

        vector<vector<int>> adj(n);

        for (auto e : edges)
        {
            int u = e[0];
            int v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> vis(n, 0);

        if (checkDfs(0, -1, vis, adj))
        {
            return false;
        }

        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
                return false;
        }

        return true;
    }
};