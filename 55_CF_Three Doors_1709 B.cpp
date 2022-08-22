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
        int x, y, tmp;
        cin >> x ;
        vector<int> v(4);
        for(int i=1; i<4; i++){
            cin >> v[i];
        }
        while(x != 0){
            tmp = v[x];
            v[x] = 0;
            x = tmp;
        }

        if( max({v[1], v[2], v[3]}) == 0 )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
            

    }
}