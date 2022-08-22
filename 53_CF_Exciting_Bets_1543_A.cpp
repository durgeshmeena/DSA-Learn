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


int main() {
    run();

    int t;
    cin >> t;
    while (t--) {
        long long a,b, tmp, diff;
        cin >> a >> b;
        
        tmp = min(a, b);
        b = max(a, b);
        a = tmp;
        diff = b-a;
        if(a == b){
            cout << 0 <<" "<< 0 << endl;
            continue;
        }else if(a==0){
            cout << b <<" "<< 0 << endl;
            continue;
        }

        long long gcd=1, step=0;

        if(diff%a == 0)
            gcd = a;  
        if(diff > gcd) {
            gcd = diff;
            tmp = a/diff;
            step = min({a, a-tmp*diff, (tmp+1)*diff-a});
        } 
        cout << gcd << " " << step << endl;


    }
}