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

    vector<int> A = {4, 6, 13, 16, 20, 3, 1, 12};

    sort(A.begin(), A.end());
    int n = A.size();
    long long sum=0;
    int k, M = 1e9+7;
    for(int i=0; i<n-2; i++){
        if(A[i]==0) continue;
        k=i+2;
        for(int j=i+1; j<n-1; j++){
            while(k<n && A[i]+A[j] > A[k]){
                k++;
            }
            sum = (sum+k-j-1)%M;  
        }
    }

    cout << "Number of triangles: " << sum << endl;

    
    
}