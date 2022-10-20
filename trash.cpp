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

    
    vector<int> c={3,6,1,3,4};
    vector<int> r={2,1,3,4,5};
    long long budget=25;
    int n = c.size();

    int dp[n][n];
    memset(dp, 0, sizeof(dp));

    int res = 0;
    for(int k=0; k<n; k++){
        if(c[k]+r[k] <= budget){
            dp[k][k] = 1;
            res = 1;
        }
    }


    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(dp[i][j-1]==0)
                dp[i][j] = 0;
            else{
                int val = *max_element(c.begin()+i, c.begin()+j+1) + (j-i+1)*(accumulate(r.begin()+i, r.begin()+j+1, 0));
                if(val <= budget){
                    dp[i][j] = j-i+1;
                    res = max(res, dp[i][j]);
                }
                    
                else
                    dp[i][j] = 0;
            }
        }
    }

    cout << res << endl;


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

}