#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    vector<int> arr{40, 20, 30, 10, 30};
    int N = arr.size();

    vector<vector<int>> dp(N, vector<int>(N));
    
    
    // for(int i=N-2; i>=0; i--)
    //     for(int j=i+1; j<N-1; j++){
    //         int tmp = INT_MAX;
    //         for(int k=i; k<j; k++){
    //             int cost_k = arr[i-1]*arr[k]*arr[j];
    //             tmp = min(tmp, dp[i][k] + cost_k + dp[k+1][j]);
    //         }
    //         dp[i][j] = tmp;
    //     }
        
    for(auto v:dp){
        for(auto x:v)
            cout<<x<<" ";
        cout<<"\n";    
    }    
        
    cout << dp[0][N-2];      
    

    return 0;
}