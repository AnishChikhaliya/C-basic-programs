/*
     Kruskal's Algorithm and also know as a Minimum Spining Tree 
     used to convert Graph into Tree.

*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

int prant[N];
int size[N];

void make(int v){
    prant[v] = v;
    size[v] = 1;
}

int find(int v){
    if(v == prant[v]) return prant[v];
    // Path Compration 
    return prant[v] = find(prant[v]);
}

void Union(int a, int b){
    a = find(a);
    b = find(b);
    if(a != b){
    // union by size 

    if(size[a] < size[b])
        swap(a,b);
        prant[b] = a;
        size[a] += size[b];
    }
    
}

int main(){
    
    int n,m;
    cin >> n >> m;
    // for store wt and u,v value.

    vector<pair<int,pair<int,int>>> edges;

    for(int i=0; i<m; ++i){
        int u,v,wt;
        cin >> u >> v >> wt;
        edges.push_back({wt,{u,v}});
    }

    sort(edges.begin(), edges.end());

    for(int i = 1; i<=n; ++i) make(i);

    int total_ct = 0;
    for(auto &edge : edges){
        int wt = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;
        if(find(u) == find(v)) continue;
        Union(u,v);

        total_ct += wt; 

        cout << u << " " << v << endl;
    }

    cout << total_ct << endl;
}