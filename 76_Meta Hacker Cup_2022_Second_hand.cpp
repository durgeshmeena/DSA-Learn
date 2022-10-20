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

    int t, cases;
    cin >> t;
    cases = t;
    while (t--) {
        int n, cap;
        cin >> n >> cap;
        if(2*cap < n){
            cout << "Case #" << cases - t << ": " << "NO" << endl;
            continue;
        }
        

        unordered_map<int, int> count;


        int ans = 0;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            count[x] += 1;
           
            if(count[x] > 2){
                cout << "Case #" << cases - t << ": " << "NO" << endl;
                ans = 1;
                break;
            }
        }

        if(ans==1) continue;
        
        cout << "Case #" << cases - t << ": " << "YES" << endl;
        

    }
}