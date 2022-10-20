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

    string A; cin >> A;

    int n = A.size();
    vector<int> lps(n);
    lps[0]=0;
    int i=1, len=0;
    while(i<n){
        if(A[i] == A[len]){
            len++;
            lps[i] = len;
            i++;
        }
        else{
            if(len != 0){
                len = lps[len-1];
            }
            else{
                lps[i] = 0;
                i++;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout << lps[i] << " ";
    }

    
}