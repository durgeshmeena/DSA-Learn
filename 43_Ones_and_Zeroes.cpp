#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    

    string s = "1101";
    int oneCnt = count(s.begin(), s.end(), '1');
    int zeroCnt = s.size() - oneCnt;

    cout << oneCnt << " " << zeroCnt << endl;
    

    return 0;
}