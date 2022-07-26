#include <bits/stdc++.h>
using namespace std;

bool dfs(int i, vector<vector<int>>& adj, vector<int>&visted, vector<int>&dfsvis){
    visted[i]=1;
    dfsvis[i]=1;
    for(auto next:adj[i]){
        if(!visted[next]){
            if(dfs(next,adj,visted,dfsvis))
                return true;
               
        }
        else if(dfsvis[next]) return true;
    }
    dfsvis[i]=0;
    return false;
}

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
    vector<int>visted(n+1);
    vector<int>dfsvis(n+1);
    
    vector<vector<int>> adj(n+1);
    for(auto p:edges){
        adj[p.first].push_back(p.second);    
    }
    
    
    for(int i=1; i<=n; i++){
        if(!visted[i])
            if(dfs(i, adj, visted, dfsvis))
                return 1;
    }
    return 0;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;

    while(t--) {
        int n;
        int m;
        cin >> n >> m;
        vector<pair<int,int>> edges;
        for(int i=0; i<m; i++){
            int u,v;
            cin >> u >> v;
            edges.push_back({u,v});
        }
        cout << (detectCycleInDirectedGraph(n, edges)?"YES":"NO") << endl;
    }
    

    return 0;
}