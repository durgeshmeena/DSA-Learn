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

int solve(int pos, int val, int tight, int n, int LOWER, int UPPER, vector<int> &A, string &s){
    if(pos == n){
        // cout << val << " ";
        return (val >= LOWER && val < UPPER);
    }

    int res = 0;

    int LMT = tight ? s[pos]-'0' : 9;
    cout << "Pos = " << pos << ", Val = "<< val << ", LMT = "<< LMT <<"\n";
    for(auto x : A){
        if(x > LMT) break;
        int ntight = tight;
        if(ntight and x<LMT)ntight = 0;

        int res0 = solve(pos+1, val*10 + x, ntight, n, LOWER, UPPER, A, s);
        cout << "res_"<<x<<" = " <<res0 <<"\n";
        res += res0;

    }

    return res;
}

int main() {
    run();

    // vector<int> A = {0, 1, 2, 5};
    // int B = 2, C = 21;
    
    // int lower = B==1 ? 0 : pow(10, B-1);
    // int upper = min(C, (int)pow(10, B)-1);

    // string s = to_string(upper);

    // cout << "lower = " << lower << ", upper = " << upper <<"\n";
    // int res = solve(0, 0, 1, B, lower, upper, A, s);
    

    // cout <<"\nANS = "<< res << endl;

    int x = 12121;

    int n = log10(x)+1;
    int ne = n/2;
    
    int div = pow(10, ne);

    int a = x/div;
    if(n%2==1)a = a/10;
    int b = x%div;

    cout << "n = " << n << endl;
    cout << "a = " << a << ", b = " << b <<"\n";

    int i=0;
    while(i<ne){
        
    }

    
    
}