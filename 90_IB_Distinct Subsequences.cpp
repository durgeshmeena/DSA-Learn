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

int ways(int i, int j, string &A, string &B, vector<vector<int>> &dp){
    // if(i<0 || j<0){
    //     if(i==-1 and j==-1)return 1;
    //     return 0;
    // }
    if(j<0)return 1;
    if(i<0)return 0;
    
    if(A[i] == B[j]){
        return dp[i][j] = ways(i-1, j-1, A, B, dp) + ways(i-1, j, A, B, dp);
    }
    else{
        return dp[i][j] = ways(i-1, j, A, B, dp);
    }
    
}


int main() {
    init();

    string A, B; cin >> A >> B;
    cout << A << endl << B << endl;

    int res = 0, n=A.size(), m=B.size();
    
    vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
    
    int val = ways(n-1, m-1, A, B, dp);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    
    return dp[0][0];

    
}