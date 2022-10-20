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

    int n, k;
    cin >> n >> k;

    int val = k-1;

    double div = (1.0*n)/k;

    for(int i=1; i<k; i++){
        int a = ceil(div*i);
        int b = floor(div*i);
        if(a==b)val--;

    }

    if(val <= 0)val=0;

    cout << val << endl;
    
}

    // cout << "div: " << div << endl;
    // cout  << "a: " << a << " b: " << b << endl;