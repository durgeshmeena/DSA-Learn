#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void run() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
#endif
}

void dfs(int i, int sum, int & ways, string &s){
    if(ways>1 || sum<0 || sum>s.size()/2)
        return; 
    if(i == s.size()){
        if(sum == 0){
            ways++;
        }
        return;
    }
    
    if(s[i] == '('){
        dfs(i+1, sum+1, ways, s);
    }
    else if(s[i] == ')'){
        dfs(i+1, sum-1, ways, s);

    }
    else{
        dfs(i+1, sum+1, ways, s);
        dfs(i+1, sum-1, ways, s);
    }
    
}

int main() {
    run();

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if(s.size()%2 != 0){
            cout << "NO" << endl;
            continue;
        }
        int ways = 0;
        dfs(0, 0, ways, s);
        if(ways == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}