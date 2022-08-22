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

    string s, str="", vowels="aeiouyAEIOUY";
    cin >> s;
 
    for(auto c : s){
        if(vowels.find(c) != string::npos) continue;
        str += ".";
        str += tolower(c);
    }
 
    cout << str << endl;
}