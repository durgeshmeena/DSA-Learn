#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    unordered_map<char, vector<int>> dir = {{'R', {0,1}}, {'L', {0,-1}}, {'U', {-1,0}}, {'D',{1,0}}};

    for(auto it : dir){
        cout << it.first << " :  " << it.second[0] << ", " << it.second[1] << endl;
    }
    

    return 0;
}