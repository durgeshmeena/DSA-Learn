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

string increase(string s){
    int n = s.size();
    int i=n-1;
    while(i>0 && s[i]=='9'){
        s[i] = '0';
        i--;
    }
    if(i==0){
        s[i]= '1';
        s[i+1] = '0';
        return s;
    }
    else{
        s[i]++;
        return s;
    }
}

string solve(string A) {

    int n = A.size();
    if(n==1)return "11";

    cout << "n=" << n << endl;
    string s1="", s3="", s4="", s2="";
    s1 = A.substr(0, n/2);
    s3 = s1; reverse(s3.begin(), s3.end());
    s4 = A.substr((n+1)/2);

    if(n%2==1)
        s2 = A[n/2];
    cout << "s1="<< s1 << ", s3=" << s3 << ",  s4=" << s4 << ", s2="<< s2 << endl;

    if(s3.size() and s3>s4)
        return s1+s2+s3;
    else if(n%2==1 and s2!="9")
        return s1+to_string(s2[0]++)+s3;    
    else{
        s1 = increase(s1);
        cout << "i+s1= " << s1 << endl;
        s3 = s1; reverse(s3.begin(), s3.end());
        if(n%2==0) return s1+s3;
        return s1+"0"+s3;
    }
        
    
        
}

int main() {
    run();

    string s =  "99";

    cout << solve(s) << endl;
    
    
}