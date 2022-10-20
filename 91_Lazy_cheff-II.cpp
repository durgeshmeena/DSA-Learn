#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void init() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#else
#endif
}

// solution for Lazy Cheff-II

int main() {
    init();

    int n;
    cin >> n;
    char tmp;
    vector<char> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for(auto x: A){
        cout << x << " ";
    }
    cout << endl;

    char I1, I2;
    cin >> I1 >> I2;

    cout << I1 << " " << I2 << endl;


    int i = 0, j = 0, res = 0, val=0;

    while (i < n) {
        if (A[i] == I1) {
            i++;
            res += val;
            val=0;
            while (i < n and A[i] != I1) {
                val++;
                i++;
                
            }
            
        }
        else
            i++;
    }

    i=0;
    while (i < n) {
        if (A[i] == I2) {
            i++;
            res += val;
            val=0;
            while (i < n and A[i] != I1) {
                if(A[i] != I1){
                    val++;
                }
                i++;
                
            }
            
        }
        else
            i++;
    }

    cout << res << endl;

    return 0;
}


