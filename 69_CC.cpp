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
        cin >> n;
        vector<int> a(n);
        int zero=0, one=0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i]==0) zero++;
            else one++;
        }

        int max_diff = 2*min(zero, one);
        int diff=0, one_pair=0, zero_pair=0;
        for(int i=0; i<n; i++){
            if(a[i] != a[(i+1)%n]){
                diff++;
            }
            if(a[i] == 1 and a[(i+1)%n] == 1){
                one_pair++;
            }
            if(a[i] == 0 and a[(i+1)%n] == 0){
                zero_pair++;
            }
            
        }
        

       
        


    }
}