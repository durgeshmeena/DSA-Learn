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
        int n;
        cin >> n ;


        vector<int>v(n);
        int cnt=1;
        for(int i=0;i<n;i++){
            if(i%2==0){
                v[i]=cnt;
                cnt++;
            }
        }
        for(int i=0;i<n;i++){
            if(i%2){
                v[i]=cnt;
                cnt++;
            }
        }

        for(auto x:v){
            cout   << x << " ";
        }
        cout<<endl;
        
    }
}