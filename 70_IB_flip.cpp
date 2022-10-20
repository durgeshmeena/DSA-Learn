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

    string A = "010";
    int n = A.size();
    vector<int> count(n+2);


    count[0] = 0;
    count[1] = A[0]=='0';
    for(int i=2; i<=n; i++){
        count[i] = count[i-1] + (A[i-1]=='0');
    }
    count[n+1] = count[n];

    for(auto x: count){
        cout << x << " ";
    }
    cout << endl;
    
    
    int zero = count[n];
    int one = n-zero;
    int reqd = ceil(1.0*(n+1)/2);
    int diff = reqd-one, curr=one; 

    int new_one, next_one, old_one, total_one;
    
    vector<int> ans(2);
    for(int i=0; i<n; i++){
        for(int j=i+1; j<=n; j++){


            old_one = i - count[i];
            new_one = count[j]-count[i];
            next_one = n-j - count[n]+count[j];
            total_one = old_one + new_one + next_one;
    

            cout << "old_one_"<<i<<"_"<<j<<": " << old_one << " new_one: " << new_one << " next_one: " << next_one << " total_one: " << total_one << endl;

            if( total_one > curr){
                curr = total_one;
                ans[0]=i+1;
                ans[1]=j;            
            }
        }
    }

    cout << "curr = " << curr << endl;
    
    if(ans[0]==0)cout << "NO" <<endl;
    cout << ans[0] << " " << ans[1] << endl;
    
}