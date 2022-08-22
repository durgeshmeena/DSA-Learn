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

void print(vector<long long> &v){
    for(auto x: v)cout << x << " ";
    cout << endl;
}

int main() {
    run();

    vector<long long> A = {1795, 20957, 26433, 24290, 25657, 16657, 23790, 12639};

    print(A);

    int N = A.size();
    int n = N;
    
    for(int i=0; i<n; i++){
        A[i] += (A[A[i]]%N);
    }

    print(A);
    
    // for(int i=0; i<n; i++){
    //     A[i] = A[i]/M;
    // } 
    // print(A);   
    
}