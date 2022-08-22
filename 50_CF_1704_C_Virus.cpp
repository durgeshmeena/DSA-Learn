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

void print(vector<int> &v) {
    for (auto i : v)
        cout << i << " ";
    cout << endl;
}


int main() {
    run();

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> v(m), diff(m);
        for(int i=0; i<m; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        for(int i=1; i<m; i++){
            diff[i] = v[i] - v[i-1] - 1;
        }
        diff[0] = v[0]-1 + n-v.back();
        sort(diff.begin(), diff.end());
        // print(diff);
        

        int safe = 0, step = 0;
        for(int i=m-1; i>=0; i--){
            int rem = diff[i] - step*4;
            if(rem <= 0) break;
            rem = max(1, rem-1);
            // cout << "rem: " << rem << endl;
            safe += rem;
            step++;
        }

        cout << n - safe << endl;


    }
}