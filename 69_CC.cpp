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
    int time = 30;
    while (t--) {
        int n;
        cin >> n ;

        cout << (60*n)/time << endl;
        
    }
}