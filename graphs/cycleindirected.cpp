#include <iostream>
#include <vector>
using namespace std;

class Solution
{
private:
    bool checkDfs(int node, vector<int>& vis, vector<int>& pathVis, vector<vector<int>>& adj)
    {
        vis[node] = 1;
        pathVis[node] = 1;

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                if (checkDfs(it, vis, pathVis, adj) == true)
                {
                    return true;
                }
            }else{

                if(pathVis[it]){
                    return true;
                }

            }
        }

        pathVis[node] = 0;
        return false;
    }

public:
    bool isCyclic(int V, vector<vector<int>> adj)
    {
        vector<int> vis(V, 0);
        vector<int> pathVis(V, 0);

        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                if (checkDfs(i, vis, pathVis, adj) == true)
                    return true;
            }
        }
        return false;
    }
};