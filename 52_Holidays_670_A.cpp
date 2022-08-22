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

    int n;
    cin >> n ;
    int mini, maxi, rem, div;

    div = n/7;
    rem = n%7;
    mini = maxi = 2*div;
    if(rem>0){
        maxi += min(rem, 2);
    }
    if(rem>5){
        mini += rem-5;
    }

    cout << mini << " " << maxi << endl;

}