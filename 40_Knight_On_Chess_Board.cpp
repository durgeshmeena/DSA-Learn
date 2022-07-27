#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>>& A){
    cout << endl;
    for(int i=0; i<A.size(); i++){
        for(int j=0; j<A[0].size(); j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int BFS(int i, int j, int di, int dj, int r, int c){
    vector<vector<int>> vis(r, vector<int>(c));
    vector<int>dir = {-1,-2,1,2,-1, 2,1,-2,-1};
    vis[i][j] = 1;
    vis[di][dj] = 2;
    // priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> q;
    print(vis);
    queue<vector<int>> q;
    q.push({i,j});
    int step=0;
    while(q.size()){
        int sz = q.size();
        for(int k=0; k<sz; k++){
            auto v = q.front(); q.pop();
            int si = v[0], sj = v[1];
            if(si==di && sj==dj)
                return step;
            for(int d=0; d<8; d++){
                int ni = si + dir[d];
                int nj = sj + dir[d+1];
                if(ni>=0 && nj>=0 && ni<r && nj<c && vis[ni][nj]!=1){
                    vis[ni][nj] = 1;
                    q.push({ni, nj});
                    
                }
            }     
        }  
        print(vis);
        step++; 
            
    }
    return -1;
}


int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int A = 8, B = 8,C = 1,D = 1,E = 8,F = 8;

    int val = BFS(C-1,D-1, E-1,F-1, A,B);
    
    cout << "val = ";
    cout << val << endl;

    return 0;
}