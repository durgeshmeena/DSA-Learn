#include <bits/stdc++.h>
using namespace std;


vector<int> dir = {-1,0,1,0,-1};

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



void BFS(int i, int j, int r, int c, int val, vector<vector<int> > &vis, vector<vector<int> > &A){
    queue<pair<int,int>> q;
    q.push({i,j});
    if(vis[i][j]<val)
        vis[i][j]+=val;
    while(q.size()){
        auto i = q.front().first;
        auto j = q.front().second;
        q.pop();
        
        for(int d=0; d<4; d++){
            int ni,nj;
            ni = i+dir[d]; nj = j+dir[d+1];
            if(ni>=0 && nj>=0 && ni<r && nj<c && vis[ni][nj]<val && A[ni][nj] >= A[i][j]){
                vis[ni][nj]+=val;
                q.push({ni,nj});
            }
        }    
        
    }
}


int solve(vector<vector<int> > &A) {

    int r = A.size();
    int c = A[0].size();
    
    vector<vector<int>> vis1(r, vector<int>(c));
    // vector<vector<int>> vis2(r, vector<int>(c));
    
    for(int j=0; j<c; j++){
        BFS(0,j, r,c, 1, vis1, A);
    }
    
    for(int i=0; i<r; i++){
        BFS(i,0, r,c, 1, vis1, A);
    }


    print(vis1);


    for(int j=0; j<c; j++){
        BFS(r-1,j, r,c, 2, vis1, A);
    }
    
    for(int i=0; i<r; i++){
        BFS(i,c-1, r,c, 2, vis1, A);
    }

    print(vis1);
    
    int res=0;
    for(int i=0; i<r; i++)
        for(int j=0; j<c ;j++){
            if(vis1[i][j]==3)
                res++;
        }
        
    return res;    
    
}




int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    vector<vector<int>> A ={
       {1, 2, 2, 3, 5},
       {3, 2, 3, 4, 4},
       {2, 4, 5, 3, 1},
       {6, 7, 1, 4, 5},
       {5, 1, 1, 2, 4},
    };

    cout << solve(A) << endl;
    

    return 0;
}