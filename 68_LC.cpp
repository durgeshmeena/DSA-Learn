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

        string s = "xyz";
         vector<vector<int>> shifts = {};

        int n = s.size();
        vector<int> count(n+1);
        
        for(auto v : shifts){
            if(v[2]==1){
                count[v[0]]++;
                count[v[1]+1]--;
            }
            else{
                count[v[0]]--;
                count[v[1]+1]++;
            }
        }

        for(auto x : count){
            cout << x << " ";
        }
        
        int change = 0;
        
        for(int i=0; i<n; i++){
            change += count[i];
            
            s[i] = 'a' + (s[i]-'a'+change + 26)%26;
        }   

        char c1 = 'y';
        char c2 = '_';

        int dif = 'a' - '_';

        cout << "\n" << s  << "\n" << dif<< endl;

        string s1,s2;

        s1 = 'a'+24;
        s2 = 'a'-1;

        // cout << "\n" << s1 << "\n" << s2 << endl;
    
}