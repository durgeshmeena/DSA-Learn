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

int M = 1000003;

long long fact[55];
void fac(int n){
    fact[0] = 1ll*1;
    for(int i=1; i<=n; i++)
        fact[i] = 1ll*(fact[i-1]*i)%M;
}

int main() {
    run();

    string A = "baa";



    int n = A.size();
    fac(n);
    n--;
    string B=A;
    sort(B.begin(), B.end());


    // int ind1 =  B.rfind('b');
    // int ind2 =  B.rfind('a');

    // cout << ind1 << " " << ind2 ;
   
    unordered_map<char, int> count;
    for(auto c:B)
        count[c]++;


    cout << A << "\n" << B <<  endl;

    
    int res = 1, rank=0;
    for(int i=0; i<A.size(); i++){
        B = A.substr(i);
        sort(B.begin(), B.end());
        cout << A[i] << "-";
        if(A[i] == B[0]){cout<<"0\n"; continue;}
        rank = B.rfind(A[i]) - B.find(B[0]);
    
        int val = ( rank*(fact[n-i]%M))%M;

        val = rank*fact[n-i];
        for(auto c:B)
        
        cout << val << " ( "<< rank <<"*"<<fact[n-i] <<" )" <<"\n";
        res = (res + val)%M;
        
    }
    
    cout << "\nRes=" << res << endl;
    
    
}