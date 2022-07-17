#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;

    while(t--) {
        int n;
        string s;
        cin >> n;
        while(n--){
            char c;
            cin >> c;
            s += c;
        }
        int ans = s.length();
        
    }
    
    

    return 0;
}