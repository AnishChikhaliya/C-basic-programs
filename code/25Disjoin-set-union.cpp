/*
     Disjoin Set Union (DSU) 
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

int prant[N];
int size[N];
int v;

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

    int n, k;
    cin >> n >> k;
    
    for(int i=1; i<=n; ++i){
        make(i);
    }
    while(k--){
        int u,v;
        cin >> u >> v;
        Union(u, v);
    }
    int ct = 0;
    for(int i=1; i<=n; ++i){
        
       if(find(v) == v) ct++;
    }

}