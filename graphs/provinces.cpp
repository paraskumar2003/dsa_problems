#include <iostream>
#include <vector>
using namespace std;

class Solution
{
private:
    void dfs(int node, vector<int> adj[], vector<int> &vis, vector<int> &ls)
    {
        vis[node] = 1;
        ls.push_back(node);

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                dfs(it, adj, vis, ls);
            }
        }
    }

public:
    vector<int> dfsTraversal(int V, vector<int> adj[])
    {
        if (V == 0)
            return {};

        vector<int> vis(V, 0);
        vector<int> ls;

        int start = 0;

        dfs(start, adj, vis, ls);

        return ls;
    }
};

int main()
{
    int V = 5;
    vector<int> adj[V];

    // Create an undirected graph
    adj[0].push_back(1);
    adj[0].push_back(2);

    adj[1].push_back(0);
    adj[1].push_back(3);

    adj[2].push_back(0);
    adj[2].push_back(4);

    adj[3].push_back(1);
    adj[4].push_back(2);

    Solution solution;

    vector<int> result = solution.dfsTraversal(V, adj);

    cout << "DFS Traversal: ";

    for (int node : result)
    {
        cout << node << " ";
    }

    cout << endl;

    return 0;
}
