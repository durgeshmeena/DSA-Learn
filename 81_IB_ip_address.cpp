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

void dfs(int i, int count, string cur, string res, string &A, int n){
    if(i==n){
        if(count==3){

            if(stoi(cur)>255 || (stoi(cur)==0 and cur.size()!=1)){
                return;
            }

            res += cur;
            cout << res << endl;
        }
        return;
    }


    if(cur.size()<3 and stoi(cur+A[i]) < 256){
        if(stoi(cur)==0 and cur.size()==1);
        else
            dfs(i+1, count, cur+A[i], res, A, n);
    }
        

    if(count<3 and ((n-i) <= 3*(3-count))  ){
        string ncur = ""; ncur += A[i];
        dfs(i+1, count+1, ncur, res+cur+".", A, n);
    }


}


void solve(string s, int i, int j, int level, string temp)
{
    if (i == (j + 1) && level == 5) {
        cout << temp.substr(1) << endl;
    }
 
    // Digits of a number ranging 0-255 can lie only between
    // 0-3
    for (int k = i; k < i + 3 && k <= j; k++) {
        string ad = s.substr(i, k - i + 1);
 
        // Return if string starting with '0' or it is
        // greater than 255.
        if ((s[i] == '0'&&ad.size()>1) || stol(ad) > 255)
            return;
 
        // Recursively call for another level.
        solve(s, k + 1, j, level + 1, temp + '.' + ad);
    }
}

int main() {
    init();

    cout << "Hello World!" << endl;

    string A = "25525511135";
    // cout << A << endl;

    int n = A.size();
    string res = "", cur = "";
    cur += A[0];


    // dfs(1, 0, cur, res, A, n);    

    solve(A, 0, n - 1, 1, "");

    
}