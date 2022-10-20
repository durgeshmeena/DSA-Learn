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

    string A, B;
    cin >> A >> B;

    // cout << A << endl << B << endl << endl;

    reverse(A.begin(), A.end()); reverse(B.begin(), B.end());

    // cout << A << endl << B << endl << endl;

    int n = A.size(), m = B.size();
    if(n > m)
        B += string(n-m, '0');
    else if(m > n)
        A += string(m-n, '0');    
    n = A.size(), m = B.size();

    cout << A << endl << B << endl << endl ;

    int a = A[0]-'0'+B[0]-'0';
    int b = A[0]+B[0]-2*'0';

    cout << a << endl << b << endl << endl;
    
    // unordered_map<string, int> map = {{"00", 0}, {"01", 1}, {"10", 1}, {"11", 10}};
    
    string ans = "", cur="0";
    int i=0, val, rem=0;
    while(i<n){
        cur  += A[i];
        cur += B[i];
        val = stoi(cur) + rem;
        if(val==2 || val==11)val=10;
        else if(val==10)val=1;
        else if(val==12)val=11;

        cout << A[i] << "+" << B[i] << "," << rem  << " -> " << val << endl;
        
        rem = val/10;
        
        ans += to_string(val%10);
        
        cur = "0";
        i++;
        
    }
    if(rem) ans += "1";

    cout << ans;

    reverse(ans.begin(), ans.end());


    
    
}