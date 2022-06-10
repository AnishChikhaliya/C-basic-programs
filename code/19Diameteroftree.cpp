/*
Find Maximum depth of the tree and print the diameter of tree.

*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int> g[N];
int depth[N];

void dfs(int v, int par = -1){    // par is parant child means visited node 
       
    //** Take a action on vertex after entering the vertex. **//

    for(int child : g[v]){

    //** Take a action on child after entering the child. **//

        if(child == par) continue;
        depth[child] = depth[v] + 1; 
        dfs(child, v);

    //** Take a action on child after exiting the child. **//  

    }

    //** Take a action on vertex after exiting the vertex. **//

}

int main(){

//** This Syntax for input of tree graph **//

    int n;
    cin >> n;
    for(int i = 0; i < n-1; ++i){
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1);

    int max_depth = -1;
    int max_d_node;

    for(int i=1; i<=n; ++i){
       if(max_depth < depth[i]){
           max_depth = depth[i];
           max_d_node = i;
       }
       depth[i] = 0;
    }

    dfs(max_d_node);
    max_depth = -1;

    for(int i=1; i<=n; ++i){
       if(max_depth < depth[i]){
           max_depth = depth[i];
       }
    }

    cout << max_depth << endl;      

}