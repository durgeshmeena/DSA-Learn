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
        int n, k, mod = 1e9+7;
        cin >> n >> k;
        string s;
        cin >> s;
        k = min(k, n-k);
        if(k>=n){
            cout << 2 << endl;
            continue;
        }else if(k==1 || n%k==0){
            long long val = pow(2, n);
            val = val%mod;
            cout << val << endl;
            continue;
        }
        else{
            long long  val, mul=1;
            if(n%2){
                mul=2;
            }

            val = 1ll*n*(n-1)/2;

            long long res = (2+val)%mod;
            cout << res << endl;

        }




    }
}