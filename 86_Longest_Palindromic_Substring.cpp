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


int main() {
    init();

    string A; cin >> A;
    int n = A.size();
    vector<vector<int>> dp(n, vector<int>(n,0));
    
    for(int k=0; k<n; k++)dp[k][k]=1;
    
    for(int i=n-2; i>=0; i--){
        for(int j=i+1; j<n; j++){
            if(A[i] == A[j] and ( dp[i+1][j-1]==j-i-1 || j-i==1  )){
                dp[i][j] = 2 + dp[i+1][j-1];
            }
            else{
                dp[i][j] = max(dp[i][j-1], dp[i+1][j]);
            }
        }
    }
    
    string s = "";
    int len = dp[0][n-1];
    
    int i=0, j=n-1;
    while( len == max(dp[i][j-1], dp[i+1][j])  ){
        if(dp[i][j] == dp[i][j-1]){
            j--;
        }
        else{
            i++;
        }
    }


    
    s = A.substr(i, len);

    cout << s << endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }


}