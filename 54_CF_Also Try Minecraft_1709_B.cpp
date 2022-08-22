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

void print(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    run();

    int n, m;
    cin >> n >> m;
    vector<long long> v(n), pre_diff(n), post_diff(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for(int i=1; i<n; i++){
        pre_diff[i] = pre_diff[i-1] + max(1ll*0, v[i-1]-v[i]);
    }
    for(int i=n-2; i>=0; i--){
        post_diff[i] = post_diff[i+1] + max(1ll*0, v[i+1]-v[i]);
    }

    // print(v);
    // print(pre_diff);
    // print(post_diff);

    int x, y;
    while(m--){
        cin >> x >> y;
        if(x < y) cout << pre_diff[y-1] - pre_diff[x-1] << endl;
        else cout << post_diff[y-1] - post_diff[x-1] << endl;
    }

}