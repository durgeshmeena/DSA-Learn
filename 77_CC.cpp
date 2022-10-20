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
        int odd=0,even=0;
        for(auto x: count){
            if(x.second%2){
                odd++;
            }
            else even++;
        }
        if(odd==0)
        {
            if(even%2)cout << "NO" << endl;
            else cout << "YES" << endl;
            // return;
        
        }
        else if(odd%2==0)
                cout << "YES" << endl;
        else{
                if(even)cout << "YES" << endl;
                else  cout << "NO" << endl;

            }
        

        // if(nonpair%2 == 0)
        //     cout << "YES" << endl;
        // else{
        //     if(count.size()%2 == 0)
        //         cout << "YES" << endl;
        //     else
        //         cout << "NO" << endl;
        // }
            
       
        
    }
}