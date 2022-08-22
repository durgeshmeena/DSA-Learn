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

int total = 0;
void dfs(int pos, bool tight, bool nonzero, vector<int> &count, vector<int> &v){
    if(pos == v.size()){
        if(nonzero){
            total++;
            // cout << total <<" ";
        }
        return;
    }

    int LMT = tight ? v[pos] : 9;

    // cout << "LMT=" << LMT <<"\n";

    for(int i=0; i<=LMT; i++){
        if(count[i])continue;
        // cout << "dgt- "<< LMT <<"."<<i << "\n";
        bool ntight = tight, nnonzero = nonzero;
        if(i==0)
            count[i] = (nonzero ? 1 : 0);
        else{
            nnonzero = true;
            count[i] = 1;
        }
        
        if(tight && i<LMT) ntight = false;
        dfs(pos+1, ntight, nnonzero, count, v);
        count[i] = 0;
    }
    // return;
    // cout <<"dfs end, visted\n";
    // print(count);


}


int main() {
    run();

    int A = 2000000000;
    vector<int> v;
    int num=A;
    while (num)
    {
        v.push_back(num%10);
        num /= 10;
    }
    reverse(v.begin(), v.end());
    print(v);
    
    vector<int> count(10);

    dfs(0, true, false, count, v);
    
    cout << "\nANS = " << total;

    
}