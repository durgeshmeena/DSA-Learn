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

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;

        int nonpair=0;
        unordered_map<int, int> count;
        int y;
        for(int j=0; j<n; j++){
            cin >> y;
            count[y]++;
        }
        for(auto x: count){
            if(x.second == 1)nonpair++;
        }
        

        if(nonpair%2 == 0 || count.size()%2 == 0 || (count.size()-nonpair)>0)
            cout << "YES" << endl;
        else{
           
            cout << "NO" << endl;
        }
            
       
        
    }
}