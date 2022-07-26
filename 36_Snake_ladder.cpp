#include <bits/stdc++.h>
using namespace std;



int BFS(vector<vector<int> > &L, vector<vector<int> > &S){
    
    unordered_map<int,int>danger;
    unordered_map<int,int>ladder;
    for( auto b : S) danger[b[0]]=b[1];
    for( auto a : L) ladder[a[0]]=a[1];
    
    vector<int> vis(101);
    vis[1] = 1;
    queue<int> q;
    q.push(1);
    
    int step=0;
    
    while(!q.empty()){
        int sz = q.size();
        for(int i=0; i<sz; i++){
            int ii = q.front(); q.pop();
            if(ii==100)
                return step;
                
            for(int j=6; j>0; j--){
                int ni = ii + j;
                if(ni<=100 && vis[ni]==0){

                    cout << endl << ni;

                    auto Ladder = find(L[0].begin(), L[0].end(), ni);
                    auto Snake = find(S[0].begin(), S[0].end(), ni);
                    if(Ladder != L[0].end() ){
                        vis[ni]=1;
                        ni = L[Ladder-L[0].begin()][1];
                        cout << " --> ladder " << ni;
                    }
                    else if(Snake != S[0].end()){
                        vis[ni]=1;
                        ni = S[Snake-S[0].begin()][1];
                        cout << " --> snake " << ni;
                    }

                    // if(ladder.find(ni)!=ladder.end()){
                    //     vis[ni]=1;
                    //     ni = ladder[ni];
                    //     cout << " --> ladder " << ni;
                    // }
                    // else if(danger.find(ni)!=danger.end()){
                    //     vis[ni]=1;
                    //     ni = danger[ni];
                    //     cout << " --> snake " << ni;
                    // }
                    
                    q.push(ni);    
                    vis[ni] = 1;
                    
                }
                
            }
            cout << endl;
                
                
                
        }
        step++;
    }
    
    return -1;
    
    
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    vector<vector<int>> A = {
                                {3, 90}
                            };


    vector<vector<int>> B = {
                                {99, 10},
                                {97, 20},
                                {98, 30},
                                {96, 40},
                                {95, 50},
                                {94, 60},
                                {93, 70}
                            };

    // cout << BFS(A, B) << endl;    

    auto s_10 = find(B.begin(), B.end(), 10);
    int index = s_10 - B.begin();

    cout << B[index][0] << ", " << B[index][1]  << endl;                 

    

    return 0;
}