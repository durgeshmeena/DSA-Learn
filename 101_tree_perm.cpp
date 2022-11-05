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

bool isPalindrome(char ch, unordered_map<char, int> &count) {
    count[ch]++;
    int odd = 0;
    for (auto it : count) {
        if (it.second % 2 != 0) odd++;
        if(odd > 1)return false;
    }

    return odd <= 1;

}

int solve(int node, vector<vector<int>> &adj, vector<char> &arr, unordered_map<char, int> &count, vector<int> &visited){
    int nval = 0;
    visited[node] = 1;
    nval += isPalindrome(arr[node], count);
    if(node == 0)return nval;

    for(auto child: adj[node]){
        if(visited[child] == 0){
            nval += solve(child, adj, arr, count, visited);
        }
    }

    return nval;
}

vector<int> palindromePath(int tree_node, vector<int> tree_from, vector<int> tree_to, vector<char> A, vector<int> queries) {

    // creating adj for undirected graph from tree_from to tree_to
    vector<vector<int>> adj(tree_node);
    for (int i = 0; i < tree_from.size(); i++) {
        adj[tree_from[i]].push_back(tree_to[i]);
        adj[tree_to[i]].push_back(tree_from[i]);
    }

    for(int i=0; i<adj.size(); i++){
        cout << i << " : ";
        for(auto x:adj[i])
            cout << x << " ";
        cout << endl;
    }

    int nq = queries.size();
    vector<int> ans;
    int j=0;
    while(j<nq){
        int qr = queries[j];
        unordered_map<char, int> count;
        vector<int> visited(tree_node, 0);
        int cnt = solve(qr, adj, A, count, visited);
        ans.push_back(cnt);

        j++;
    }
    
    return ans;

}

int main() {
    init();

    int tree_node = 4;
    vector<int> tree_from = {0, 0, 1};
    vector<int> tree_to = {1, 2, 3};
    vector<char> A = {'z', 'a', 'a', 'a'};
    vector<int> qr = {3};

    auto v = palindromePath(tree_node, tree_from, tree_to, A, qr);

    for(auto x:v) cout << x << " ";
    
}