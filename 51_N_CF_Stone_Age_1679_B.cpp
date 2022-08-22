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

    int n,q,t,i,x;
    cin >> n >> q;
    long long sum=0;
    vector<int> v(n+1);

    // v = vector<int> (n+1,0);

    // print(v);


    for(int i=1; i<=n; i++){
        cin >> v[i];
        sum += 1ll*v[i];
    }
    
    while(q--){
        cin >> t;
        if(t==2){
            cin >> x;
            sum = 1ll*n*x;
            v.resize(n+1,x);
            // v = vector<int> (n+1, x);
            cout << sum << endl;

        }
        else {
            cin >> i >> x;
            sum = 1ll*sum - v[i] + x;
            v[i] = x;
            cout << sum << endl;
        }
            
    }
    
    
}