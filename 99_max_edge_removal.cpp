#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void init() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
#endif
}
int ans;
int even;
int count_children(int i, int parent, vector<vector<int>> adj){
    
    // if(adj[i].size()==1)
    // return 1;

    // int local_count=1;
    // //  int even = 0;

    // for(auto x:adj[i]){

    //     if(x!=parent){
    //         int i_child = count_children(x,i,adj);
    //         local_count += i_child;
    //         if(i_child%2 == 0){even++;}
    //     }
    // }

    // if(local_count%2 == 0){ ans += even;}

    int count=0;
    for(auto child:adj[i]){
        if(child==parent){
            continue;
        }
        int val=count_children(child,i,adj);
        if(val%2==0){
            ans++;
        }
        else{
            count+=val;
        }
    }
    return count+1;
    //return local_count;
}



int main() {
    init();

    int n, col;
    cin >> n >> col;
    ans=0;
    vector<vector<int>> adj(n + 1);

    for(int i=0; i<n-1; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        
    }

    int val = count_children(1, 0, adj);

    cout << ans << endl;
    


    
}