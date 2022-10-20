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

int fact(int n) {
    if (n == 0) return 1;
    return n * fact(n - 1);
}


int main() {
    init();

    int n; cin >> n;

    vector<int> adj[n];
    vector<int> indegree(n, 0);

    int a;

    for(int i=1; i<n; i++){
        cin >> a;
        adj[a].push_back(i);
        indegree[i]++;

    }

    for(int i=0; i<n; i++){
        
        for(auto x: adj[i]){
            cout << x << " ";
        }
    }
    cout << endl;

    for(auto i: indegree){
        cout << i << " ";
    }
    cout << endl;

    queue<int>q;
    
    // for(int i=0;i<n;i++){
    //     if(indegree[i]==0)
    //         q.push(i);
    // }
    q.push(0);
    vector<int> ans;
    

    while(!q.empty()){
        
        int u=q.front();
        q.pop();
        int val=0;
        for(auto v:adj[u]){
            indegree[v]--;
            if(indegree[v]==0){
                q.push(v);
                val++;
            }
                
        }
        ans.push_back(val);

        cout << u << " -> " << val << endl;

    }

    int sum = accumulate(ans.begin(), ans.end(), 0);

    cout << sum << endl;
    
    // long long int fact_sum = fact(sum);
    // for(auto i:ans){
    //     fact_sum/=1ll*fact(i);
    // }

    // cout << fact_sum << endl;


    

    

    
}