/*
   Q quaires Print Subtree of sum.
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int> g[N];
int subtree_sum[N];

void dfs(int vertex, int par = 0){    // par is parant child means visited node 
       
    //** Take a action on vertex after entering the vertex. **//
    
    subtree_sum[vertex] += vertex;

    for(int child : g[vertex]){

    //** Take a action on child after entering the child. **//

        if(child == par) continue;
        dfs(child, vertex);

    //** Take a action on child after exiting the child. **//  
        subtree_sum[vertex] += subtree_sum[child];  

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
    // For q quiers 

    dfs(1); // for run quries loop
    int q;
    cin >> q;
    while(q--){
        int v;
        cin >> v;
        cout << subtree_sum[v] <<endl;
    }
}
