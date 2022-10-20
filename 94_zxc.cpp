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

int solve(vector<vector<int> > &A) {
    int N = A.size();
    int i = 0;
    if(N == 0) return 0; 
    
    for(i = 1; i<N; i++){
        A[0][i] += max(A[1][i-1], A[2][i-1]); 
        A[1][i] += max(A[0][i-1], A[2][i-1]);
        A[2][i] += max(A[0][i-1], A[1][i-1]);
    }
    
    // now find min of the 3 elements in last row
    int ans = min(min(A[0][i-1], A[1][i-1]), A[2][i-1]);
    return ans;
}

int main() {
    init();

    int n; cin >> n;
    vector<vector<int> > A(n, vector<int>(3));
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin >> A[i][j];
        }
    }
    cout << solve(A) << endl;
}