#include <bits/stdc++.h>
using namespace std;

int solve(int A, vector<vector<int> > &B, int C, int D, vector<vector<int> > &E) {
    
    int n = A;
    vector<int> dist(n+1, INT_MAX);
    vector<int> parent(n+1, -1);
    
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    
    vector<vector<pair<int,int>>> adj(n+1);
    for(auto e : B){
        adj[e[0]].push_back({e[1], e[2]});
        adj[e[1]].push_back({e[0], e[2]});
    }
    
    
    
    dist[C]=0;
    pq.push({0, C});
    while(pq.empty()==false){
        auto it = pq.top(); pq.pop();
        int node = it.second;
        int len = it.first;

        for(auto next : adj[node]){
            if(dist[next.first] > dist[node]+next.second){
                dist[next.first] = dist[node]+next.second;
                pq.push({dist[next.first], next.first});
                parent[next.first] = node;
            }
        }    
    }
    
    // return dist[D];
    
    unordered_map<int, bool> path;
    int node = D;
    while(node != -1){
        path[node] = true;
        node = parent[node];
    }

    for(auto p : path)
        cout << p.first << "-";
    
    int mindist=dist[D];
    for(auto ne : E){
        if(path[ne[0]] && path[ne[1]]){
            int cdist = abs(dist[ne[0]] - dist[ne[1]]);
            int ndist = ne[2];
            if(ndist < cdist){
                mindist = min(mindist, dist[D] - (cdist-ndist));
            }
        }
    }
    
    return mindist;
    
}


int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int A = 3;

    vector<vector<int>> B = {
        {1, 2, 1},
        {2, 3, 2}
    };

    int C = 1;
    int D = 3;

    vector<vector<int>> E = {
        {1, 3, 2},
    };

    int val = solve(A, B, C, D, E);
    
    cout <<"\nval = " << val << endl;

    

    return 0;
}