#include <bits/stdc++.h>
using namespace std;



int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string s = "12345678";
    int a = 10;
    int res = 0;
    for(int i=0; i<s.size(); i++){
        res = (res*10 + (s[i]-'0'))%a;
    }

    cout << res;
    

    return 0;
}