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

    int t;
    cin >> t;
    while (t--) {
        int n, mini, maxi, prev, ans = INT_MIN;
        cin >> n ;
        vector<int> c(n);
        cin >> c[0];
        prev = c[0]; maxi = c[0]; mini = c[0];
        for(int i=1; i<n; i++){
            cin >> c[i];
            ans = max(ans, abs(c[i]-prev));
            prev = c[i];
            mini = min(mini, c[i]);
            maxi = max(maxi, c[i]);
        }
        ans = max(ans , abs(c[0]-c[n-1]));
        ans = max(ans , maxi-c[0]);
        ans = max(ans , c[n-1]-mini);
        cout << ans << endl;
            
        
    }
}