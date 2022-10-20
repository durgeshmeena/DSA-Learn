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

void print(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}


void dfs(int i, vector<int> v, string A, vector<bool> &count, vector<int> &res, bool &ans){
    if(ans)return;
    if(i==A.size()){
        if(v.size()==A.size()+1){
            ans = true;
            res = v;
            // cout << "ans" << endl;
        }
        return;
    }
    

    if(A[i]=='I'){

        for(int next = v.back()+1; next<count.size(); next++){
            if(ans)return;
            if(!count[next]){
                count[next]=true;
                v.push_back(next);
                dfs(i+1, v, A, count, res, ans);
                v.pop_back();
                count[next]=false;
                
            }
        }
    }
    else{

        for(int next = v.back()-1; next>0; next--){
            if(ans)return;
            if(!count[next]){
                count[next]=true;
                v.push_back(next);
                dfs(i+1, v, A, count, res, ans);
                v.pop_back();
                count[next]=false;
                
            }
        }
    }
    return;
    
    
}


int main() {
    init();

    string A = "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD";
    int B = 35;


    vector<bool> count(B+1);
    int n = A.size();
    vector<int> res={-29}, v;
    bool ans = false;
    for(int i=1; i<=B; i++){
        if(!ans){
            count[i] = true;
            v.push_back(i);
            // cout << "dfs(" << i << ")\n";
            dfs(0, v, A, count, res, ans);
            v.pop_back();
            count[i] = false;
        }
            
    }

    for(auto i: res)cout<<i<<" ";
}