/*
Given a connected undirected graph. Perform a Depth First Traversal of the graph.
Note: Use recursive approach to find the DFS traversal of the graph starting from the 0th vertex from left to right according to the graph..


Example 1: 

                                (0)
                               / | \ 
                              /  |  \
                            (1) (2) (4)
                                      \ 
                                       \
Input:                                 (3)
1
5 4
0 1
0 2
0 4
4 3

Output: 0 1 2 4 3
Explanation: 
0 is connected to 1, 2, 4.
1 is connected to 0.
2 is connected to 0.
3 is connected to 4.
4 is connected to 0, 3.
so starting from 0, it will go to 1 then 2
then 4, and then from 4 to 3.
Thus dfs will be 0 1 2 4 3.
*/



#include<bits/stdc++.h>
using namespace std;

void DFSUtil(int i, vector<int> adj[], int V, bool vis[],vector<int> &res) {

        if (vis[i]) return;

        // marking vertex as visited and adding it to output list.
        vis[i] = true;
        res.push_back(i);

        // iterating over connected components of the vertex and if any
        // of them is not visited then calling the function recursively.
        for (int j : adj[i]) {
            if (!vis[j]) DFSUtil(j, adj, V, vis, res);
        }
    } 
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        bool vis[V];
        memset(vis, false, sizeof(vis)); // Memset() is a C++ function. It copies a single character for a specified number of times to an object.

        vector<int> res;
        for (int i = 0; i < V; i++) {
            // if any vertex isn't visited then calling the function.
            if (!vis[i]) {
                DFSUtil(i, adj, V, vis, res);
            }
        }
        // returning the output list.
        return res;
    }

int main(){
    int t;
    cin >> t;
    while(t--){
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for(int i=0; i<E; ++i){
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> ans = dfsOfGraph(V, adj);
        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    
}
