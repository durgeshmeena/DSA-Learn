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


bool ans = false;
string ansstr = "none";
string s;

void dfs(int i, string str, vector<int>& count){
    if(i==s.size()){
        if(str.size()==1+s.size()){
            ans = true;
            ansstr = str; 
            cout << str << "\n";
        }
        return;
    }
    char last = str.back();
    // cout << "last: " << last << "\n";
    
    if(s[i]=='I'){
        
        for(int d=(last-'0')+1; d<=9; d++){
            if(count[d])continue;
            // if(!ans){
                count[d]++;
                dfs(i+1, str+to_string(d), count);
                count[d]--;
            // }
        }
    }
    else{
        
        for(int d=(last-'0')-1; d>0; d--){
            if(count[d])continue;
            if(!ans){
                count[d]++;
                dfs(i+1, str+to_string(d), count);
                count[d]--;    
            }
            
        }            
    }
    return;
    
}

void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {

    run();

    string str = "IIIDIDDD";

    vector<int> count(10, 0);
    s = str;
    
    print(count);
    cout << s << endl;

    int n = s.size();
    string res = "";

    // dfs(0, "2", count);

    for(int i=1; i<10; i++){
        count[i]++;
        cout << "dfs " << i << " -> ";
        if(!ans){
            dfs(0, to_string(i), count);
        }
        cout << "\n";
        count[i]--;
    }

    cout << "\n" << ansstr << endl;
    
}