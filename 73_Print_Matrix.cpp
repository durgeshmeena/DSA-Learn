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

    int A = 4;

    int n = 2*A-1;
    
    vector<vector<int>> v(n, vector<int>(n));
    n--;
    for(int i=A; i>0; i--){
        int k=i;
        while(k){
            v[A-i][A-k] = i;
            v[A-i][n-A+k] = i;

            v[n-A+i][A-k] = i;
            v[n-A+i][n-A+k] = i;
            
            v[A-k][A-i] = i;
            v[n-A+k][A-i] = i;

            v[A-k][n-A+i] = i;    
            v[n-A+k][n-A+i] = i;

            k--;
        }
        
        
    }
    n++;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;


}