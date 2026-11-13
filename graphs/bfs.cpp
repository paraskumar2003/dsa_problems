
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> bfsTraversal(int V, vector<int> adj[]) {
        if (V == 0) return {};

        vector<int> vis(V, 0);
        queue<int> q;
        vector<int> bfs;

        vis[0] = 1;
        q.push(0);

        while (!q.empty()) {
            int node = q.front(); 
            q.pop();

            bfs.push_back(node);

            for (auto it : adj[node]) {
                if (!vis[it]) {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }

        return bfs;
    }
};

int main() {
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

    vector<int> result = solution.bfsTraversal(V, adj);

    cout << "BFS Traversal: ";

    for (int node : result) {
        cout << node << " ";
    }

    cout << endl;

    return 0;
}
