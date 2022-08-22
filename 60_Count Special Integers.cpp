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

void print(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}


int dp[12][2][1024];

int solve(int pos, int tight, int mask, vector<int> &v){
    if(pos == v.size()){
        return mask != 0;
    }

    int LMT = tight ? v[pos] : 9;

    // cout <<"tight= " << tight << ", limit= " << LMT <<"\n";

    int res = 0;
    
    for(int i=0; i<=LMT; i++){
        if(mask & (1<<i))continue;

        // cout << "dgt- "<< LMT <<"."<<i << " -> ";
        int ntight = tight, nmask;
        if(i==0 && mask==0)nmask = mask;
        else{
            nmask = mask | (1<<i);
        }
        if(tight && i<LMT)ntight = 0;
        int val = solve(pos+1, ntight, nmask, v);

        // cout << val <<"\n";

        res += val;
        
    }
    // cout <<"\n";

    return res;
}


int main() {
    run();
    int n = 135;
    vector<int> v;
    int num = n;
    while (num)
    {
        v.push_back(num%10);
        num /= 10;
    }
    reverse(v.begin(), v.end());
    print(v);


    int val = solve(0, 1, 0, v);
    
    cout << "ANS = " << val;
    
}