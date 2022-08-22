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

    int n, l;
    cin >> n >> l;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int diff = 2*max(v[0], l-v[n-1]);
    for(int i=1; i<n; i++){    
        diff = max(diff, v[i]-v[i-1]);
    }

    printf("%.10f\n", diff/2.);

    
}