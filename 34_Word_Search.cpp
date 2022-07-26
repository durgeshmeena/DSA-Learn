#include <bits/stdc++.h>
using namespace std;

void print(vector<string>& A){
    cout << endl;
    for(int i=0; i<A.size(); i++){
        for(int j=0; j<A[0].size(); j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}


bool dfs(int i, int j, int ind, vector<string> &B, string &w, int r, int c){
    if(ind==w.size())return true;
    if(i<0 || j<0 || i>=r || j>=c || B[i][j]=='*' || B[i][j] != w[ind] )
        return false;  
    B[i][j]='*';
    
    if(dfs(i,j,ind+1,B,w, r,c) || dfs(i-1,j,ind+1,B,w, r,c) || dfs(i+1,j,ind+1,B,w, r,c) || dfs(i,j-1,ind+1,B,w, r,c) || dfs(i,j+1,ind+1,B,w, r,c))  
        return true;
    B[i][j] = w[ind];
    return false;     
}


int exist(vector<string> &A, string B) {
    int r = A.size();
    int c = A[0].size();
    
    
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++){
            if(dfs(i,j,0,A,B,r,c))
                return 1;
        }
        
        
    return 0;    


}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    vector<string> A = { "FEDCBECD", "FABBGACG", "CDEDGAEC", "BFFEGGBA", "FCEEAFDA", "AGFADEAC", "ADGDCBAA", "EAABDDFF" };
    string  B = "BCDCB";

    print(A);

    cout << exist(A, B) << endl;
    

    return 0;
}