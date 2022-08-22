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


int main() {
    run();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n ;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        vector<int> v2(v.begin(), v.end());
        sort(v.begin(), v.end());
        if (v == v2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }
}